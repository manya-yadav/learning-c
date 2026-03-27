#include<stdio.h>
void swap(int x, int y){
    int temp=x;
    x=y;
    y=temp;
    printf("After swapping: a= %d, b=%d",x,y);
}
int main(){
    int a,b;
    printf("Enter 1st number: ");
    scanf("%d",a);
    printf("Enter 2nd number: ");
    scanf("%d",b);
    printf("Before swapping a=%d, b=%d\n",a,b);
    swap(a,b);
}