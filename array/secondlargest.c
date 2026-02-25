
//for int(i=0;i<10;i++){
//  if(max<arr[i]){
//      max=smax;
//      max=arr[i];
//  }
//   else if(smax<arr[i] && max!=arr[i]){
//          smax=arr[i];
//  }
//}
#include <stdio.h>
#include <limits.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int max= INT_MIN;
    int smax=INT_MIN;
    for(int i=1;i<7;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    for(int i=1;i<7;i++){
        if(arr[i]!=max && smax<arr[i]){
            smax=arr[i];
        }
    }
    printf("The second largest value is: %d",smax);
}
