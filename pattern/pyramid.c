#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for(int k=1;k<=2*n-1;k++){
            printf(" * ");
        }
        for(int j=1;j<=n-i;j++){
            printf("   ");
        }
        printf("\n");
    }
}