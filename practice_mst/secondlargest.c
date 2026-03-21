#include<stdio.h>
#include <limits.h>
int main(){
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter element %d :",i+1);
        scanf("%d",&arr[i]);
    }
    int max=INT_MIN;
    int secondmax=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    for(int i=0;i<size;i++){
        if(arr[i]==max){
            continue;
        }
        else if (arr[i]>secondmax)
        {
            secondmax=arr[i];
        }
        
    }
    printf("The max is %d, and second max is %d", max,secondmax);
}