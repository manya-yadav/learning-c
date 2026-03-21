#include <stdio.h>
int main(){
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    int temp=0;
    for(int i=0;i<size;i++){
        printf("Enter element %d :", i+1);
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<size-1;i++){
        for (int j=0;j<size-1-i;j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}