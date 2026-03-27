#include<stdio.h>
void oneToN(int i,int n){
    if(i==n+1) return;
    i=1;
    printf("%d\n",i);
    oneToN(i+1,n);
}
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int i=1;
    oneToN(i,n);
}