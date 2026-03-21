#include <stdio.h>
int main(){
    int arr[5]={0,1,2,3,4};
    int brr[3]={3,4,5};
    int m=3;
    int crr[8];
    for(int i=0;i<5;i++){
        for(int j=0;j<m;j++){
            if(arr[i]==brr[j]){
                for(int k=j;k<=m-1;k++){
                    brr[k]=brr[k+1];
                }
                m--;
                j--;
            }
        }
    }
    for(int i=0;i<5;i++){
        crr[i]=arr[i];
    }
    for(int i=0;i<m;i++){
        crr[5+i]=brr[i];
    }
    for(int i=0;i<5+m;i++){
        printf("%d ",crr[i]);
    }
}