#include<stdio.h>
int main(){
    int k;
    printf("Enter number to rotate array by: ");
    scanf("%d",&k);
    int arr[6]={1,1,5,6,7,5};
    int brr[6];
    for (int i = 0; i < 6; i++) {
        brr[i] = arr[i];
    }
    for(int i=0;i<6;i++){
        if(i+k<6){
            arr[i]=brr[i+k];
        }
        else{
            arr[i]=brr[i-k];
        }
    }
    for(int i=0;i<6;i++){
        printf("%d ",arr[i]); //hello
    }
}