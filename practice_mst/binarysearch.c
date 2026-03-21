#include<stdio.h>
int main(){
    int arr[8]={1,5,20,30,44,55,67,100};
    int mid,low=0,high=8-1,n;
    printf("Enter element to search: ");
    scanf("%d",&n);
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==n){
            printf("element found at %d",mid);
        }
        else if(n>arr[mid]){
            low=mid+1;
        }
        else if(n<arr[mid]){
            high=mid-1;
        }
    }
    return 0;
}