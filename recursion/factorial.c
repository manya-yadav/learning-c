#include<stdio.h>
int factorial(int x){
    if(x==1||x==0) return 1;
    int recAns= x*factorial(x-1);
    return recAns;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("%d",fact);
}