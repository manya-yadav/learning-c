#include <stdio.h>
int main(){
    int arr1[2][3]={{1,2,3},{3,2,6}};
    int arr2[2][3]={{3,4,1},{3,5,7}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ", arr1[i][j]+arr2[i][j]);
        }
        printf("\n");
    }
}