#include<stdio.h>
int powlog(int x, int y){
    if(y==1) return x;
    if(y==0) return 1;
    int ans;
    if(y%2==0){
        ans=powlog(x,y/2)*powlog(x,y/2); 
    }
    else{
        ans=powlog(x,y/2)*powlog(x,y/2)*x;
    }  
    return ans;
}
int main(){
    int a,b;
    printf("Enter number: ");
    scanf("%d",&a);
    printf("Enter power: ");
    scanf("%d",&b);
    printf("%d",powlog(a,b));
}