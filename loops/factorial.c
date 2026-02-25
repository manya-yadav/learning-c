#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int n1=n;
    int count=1;
    while(n>1){
        count=n*count;
        n=n-1;
    }
    printf("The factorial of %d is %d.", n1, count);
}