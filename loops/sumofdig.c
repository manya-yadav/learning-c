#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int n1=n;
    int count=0;
    int dig;
    while(n>0){
        dig=n%10;
        if (dig%2==0){
            count=dig+count;
        }
        n=n/10;

    }
    printf("The sum of the digits is %d",count);
}