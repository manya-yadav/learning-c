#include<stdio.h>
void swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main(){
    int a=2;
    int b=3;
    swap(&a,&b);
    printf("The value of a is %d, the value of b is %d",a,b);
}