#include <stdio.h>
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
    int sum=0;
    for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum=sum+arr[i][j];
        }
        printf("\n");
    }
    printf("%d",sum);
}