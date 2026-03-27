#include <stdio.h>
int add(int x, int y){
    return x+y;
}
int main(){
    int a,b,sum;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    sum=add(a,b);
    printf("%d",sum);
}