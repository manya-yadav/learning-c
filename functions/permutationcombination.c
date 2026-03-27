#include<stdio.h>
int fact(int a){
    int f=1;
    for(int i=1;i<=a;i++){
        f=f*i;
    }
    return f;
}
int combination(int x, int y){
    int com=fact(x)/(fact(y)*fact(x-y));
    return com;
}
int main(){
    int n,r;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter r: ");
    scanf("%d",&r);
    int combin=combination(n,r);
    printf("The combination of %d and %d is : %d",n,r,combin);
}