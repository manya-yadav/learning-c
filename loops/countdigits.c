#include<stdio.h>
int main(){
    int n;
    int count=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    int n1=n;
    while(n>0){
        n=n/10;
        count++;
    }
    printf("%d is the number of digits in %d",count,n1);
}