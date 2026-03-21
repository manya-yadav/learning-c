#include<stdio.h>
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
    int rd,cd;
    printf("Enter row of element to be deleted: ");
    scanf("%d",&rd);
    printf("Enter column of element to be deleted: ");
    scanf("%d",&cd);
    rd=rd-1;
    cd=cd-1;
    int arr1d[r*c];
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            arr1d[i*c+j]=arr[i][j];
        }
    }
    for(int i=rd*cd;i<r*c;i++){
        arr1d[i]=arr1d[i+1];
    }
    for(int i=0;i<r*c;i++){
        int row=i/c;
        int col=i%c;
        arr[row][col]=arr1d[i];
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}