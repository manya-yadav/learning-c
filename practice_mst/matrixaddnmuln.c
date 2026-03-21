#include<stdio.h>
int main(){
    int r1,c1,r2,c2;
    printf("Enter the number of rows for first matrix: ");
    scanf("%d",&r1);
    printf("Enter number of columns for first matrix: ");
    scanf("%d",&c1);
    int arr[r1][c1];
    printf("Enter the number of rows for second matrix: ");
    scanf("%d",&r2);
    printf("Enter number of columns for second matrix: ");
    scanf("%d",&c2);
    int brr[r2][c2];
    int mul[r1][c2];
    for(int i=0;i<r1;i++){
        for (int j=0;j<c1;j++){
            printf("Enter element for r%d , c%d",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r2;i++){
        for (int j=0;j<c2;j++){
            printf("Enter element for r%d , c%d",i,j);
            scanf("%d",&brr[i][j]);
        }
    }
    if(r1==r2 && c1==c2){
        int sum[r2][c2];
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                sum[i][j]=arr[i][j]*brr[i][j];
                printf("The sum is %d\n",sum[i][j]);
            }
        }
    }
    else{
        printf("Addition not possible.");
    }
    if(c1==r2){
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                mul[i][j]=0;
                for(int k=0;k<c1;k++){
                    mul[i][j]+=arr[i][k]*brr[k][j];
                }
            }
        }
        for(int i=0;i<r1;i++){
        for (int j=0; j<c2;j++){
            printf("The product of matrices is : %d",mul[i][j]);
        }
    }
    }
    else{
        printf("Multiplication NOT possible");
    }
}