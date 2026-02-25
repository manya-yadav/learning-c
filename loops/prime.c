#include <stdio.h>
int main(){
    int n;
    int count=0;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(int i=2;i<=n-1;i++){
        if (n%i==0){
            count++;
        }
    }
    if (count==0){
        printf("%d is a prime number. ",n);
    }
    else{
        printf("%d is not a prime number. ",n);
    }
}