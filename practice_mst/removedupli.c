#include<stdio.h>
int main(){
    int arr[6]={1,1,5,7,6,5};
    int n=6;
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<n-1;k++){
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }  
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}