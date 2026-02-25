#include <stdio.h>
int main(){
    int arr[10]; //2,4,5,1,2,7,8,3,4,1
    for(int i =0;i<10;i++){
        printf("\nEnter value %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i =0;i<10;i++){
        if (i%2==0){
            arr[i]=arr[i]*10;
        }
        else{
            arr[i]=arr[i]*2;
        }
    }
    for(int i=0;i<10;i++){
        printf("%d, ",arr[i]);
    }
}