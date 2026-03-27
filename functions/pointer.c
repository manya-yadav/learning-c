#include<stdio.h>
int main(){
    int a=5;
    int* x=&a;
    *x=7;//changes a value
    printf("%p",x);//%p = address
    printf("%d",*x);//*x is pointer, it takes value of the variable that it has the address of 
    printf("%d",a);
}