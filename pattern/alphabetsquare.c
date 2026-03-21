#include<stdio.h>
int main(){
    int n;
    char ch='A';
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%c", ch+j-1);
        }
        printf("\n");
    }
}