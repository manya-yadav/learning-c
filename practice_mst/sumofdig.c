#include <stdio.h>
int main(){
    int n,dig;
    int sum;
    printf("Enter a number :");
    scanf("%d",&n);
    while(n>=10){
        sum=0;
        while (n>0){
            dig=n%10;
            sum=dig+sum;
            n=n/10;
        }
        n=sum;
    }
    printf("The sum is: %d",n);
}