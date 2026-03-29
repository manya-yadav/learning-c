//1 1 2 3 5 8 13
#include<stdio.h>
int fib(int n){
    if(n==1||n==2) return 1;
    int ans=fib(n-1)+fib(n-2);
    return ans;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d",fib(n));
}