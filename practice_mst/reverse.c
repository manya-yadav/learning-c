#include <stdio.h>
int main(){
    int n,new=0,pa;
    printf("Enter a number: ");
    scanf("%d",&n);
    int n2=n;
    while(n2>0){
        pa=n2%10;
        new=new*10+pa;
        n2=n2/10;
    }
    printf("The reverse is : %d",new);
}