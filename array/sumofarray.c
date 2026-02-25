#include <stdio.h>
int main(){
    int arr[5]={1,7,8,4,2};
    int sum=0;
    for(int i=0;i<=4;i++){
        sum=sum+arr[i];
    }
    printf("The sum is %d ",sum);
}