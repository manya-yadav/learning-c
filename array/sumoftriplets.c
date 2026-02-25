#include <stdio.h>
int main(){
    int arr[10]={1,2,3,4,1,4,2,7,3,2};
    int count=0;
    for(int i=0;i<10;i++){
        for (int j=i+1;j<10;j++){
            for(int k=j+1;k<10;k++){
                if(arr[i]+arr[j]+arr[k]==6){
                    printf("%d, %d, %d \n",arr[i],arr[j],arr[k]);
                    count++;
                }
            }
        }
    }
    printf("The total triplets that equal to six are: %d",count);
    printf("Hello");
    int i=10;
}
