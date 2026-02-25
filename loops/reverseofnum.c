#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int dig;
    int count=0;
    int n1=n;
    while (n>0){
        dig=n%10;
        count=dig+count;
        n=n/10;
        count=count*10;
    }
    printf("The reverse of %d is %d.", n1, count/10);
}