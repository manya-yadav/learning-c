#include <stdio.h>
#include <limits.h>
int main(){
    int r,c;
    printf("Enter number of rows: ");
    scanf("%d",&r);
    printf("Enter number of columns: ");
    scanf("%d",&c);
    int arr[r][c];
    for (int m=0;m<r;m++){
        for(int n=0;n<c;n++){
            printf("Input value for r%d, c%d: ", m,n);
            scanf("%d",&arr[m][n]);
        }
    }
    int max=INT_MIN;
    int m,n;
    for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(max<=arr[i][j]){
                max=arr[i][j];
                m=i;
                n=j;
            }
        }
    }
    printf("The max value in the matrix is : %d and its index is: (%d,%d)", max,m,n );
}