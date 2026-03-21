#include <stdio.h>
int main(){
    int size, pos;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the index position of the element to be deleted: ");
    scanf("%d",&pos);
    for(int i=pos;i<size;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<size-1;i++){
        printf("%d ",arr[i]);
    }
}