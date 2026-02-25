#include <stdio.h>
int main(){
    int n;
    int a=4;
    printf("Enter till what term AP needed: ");
    scanf("%d", &n);
    for(int i=1;i<=7;i++){
        a+=3;
        printf("%d\n",a);
    }
}