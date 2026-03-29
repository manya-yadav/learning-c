#include<stdio.h>
void nTo1(int n){
    if(n==0) return;
    printf("%d\n",n);
    nTo1(n-1);
    printf("%d\n",n);
    return;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    nTo1(n);
}