#include <stdio.h>
int main(){
    int size,pos,new;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size+10];
    for(int i=0;i<size;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the index position of new element : ");
    scanf("%d",&pos);
    printf("Enter value of new element : ");
    scanf("%d",&new);
    for (int i=size-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=new;
    for(int i=0;i<=size;i++){
        printf("%d ", arr[i]);
    }
}