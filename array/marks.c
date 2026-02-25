#include <stdio.h>
int main(){
    int arr[10];
    for (int i=0; i<=9;i++){
        printf("\nEnter student %d marks: \n", i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<=9;i++) {
        if (arr[i]<=35){
            printf("%d", i+1);
        }
    }
}