#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int a=1,sum=0,temp,b=0;
    printf("0, 1, ");
    for (int i=0;i<=n-3;i++){
        sum=a+b;
        temp=sum;
        b=a;
        a=temp;
        printf("%d, ",sum);
    }
}