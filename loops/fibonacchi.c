#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("1 1 ");
    int count=0;
    int a=1,b=1;
    for(int i =1;i<=n;i++){
        count=a+b;
        printf("%d ",count); 
        b=a;
        a=count;
    }
}