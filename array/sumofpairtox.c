#include <stdio.h>
int main(){
    //given val=6
    int arr[10]={2,4,3,5,3,2,1,3,4,7};
    int count=0;
    for(int i =0;i<10;i++){
        for (int j=i+1;j<10;j++){
            if (arr[i]+arr[j]==6){
                count++;
            }
        }
    }
    printf("%d",count);
}
