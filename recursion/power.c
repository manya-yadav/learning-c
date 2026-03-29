#include<stdio.h>
int pow(int x, int y){
    if(y==0) return 1;
    int ans=x*pow(x,y-1);   
    return ans;
}
int main(){
    int a,b;
    printf("Enter number: ");
    scanf("%d",&a);
    printf("Enter power: ");
    scanf("%d",&b);
    printf("%d",pow(a,b));
}