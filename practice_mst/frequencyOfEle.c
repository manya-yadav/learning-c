#include <stdio.h>
int main(){
    int arr[6]={1,1,5,6,7,5};
    int freq=1;
    for(int i=0;i<6;i++){
        int done=0;
        for(int k=0;k<i;k++){
            if (arr[k]==arr[i]){
                done++;
            }
        }
        if(done>0)
        continue;
        for(int j=i+1;j<6;j++){
            if(arr[i]==arr[j]){
                freq++;
            }
        }
        printf("The frequency of %d is %d\n",arr[i],freq);
        freq=1;
    }
}