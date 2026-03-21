#include <stdio.h>
int main(){
    int num=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    num%2==0?printf("number is even"):printf("number is odd");
}