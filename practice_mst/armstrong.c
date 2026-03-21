#include <stdio.h>
#include <math.h>
int main(){
    int n,dig=0,sum=0,num;
    printf("Enter a number: ");
    scanf("%d",&n);
    int n1=n;
    int n2=n;
    while(n1>0){
        n1=n1/10;
        dig++;
    }
    while(n2>0){
        num=n2%10;
        sum=sum+(int)pow(num,dig);
        n2=n2/10;
    }
    if(sum==n){
        printf("The number is an armstrong number");
    }
    else{
        printf("The number is NOT an armstrong number");
    }
}