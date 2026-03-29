#include<stdio.h>
int sum(int n){
    if(n==0) return 0;
    int recAns= n+sum(n-1);
    return recAns;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d",sum(n));
}