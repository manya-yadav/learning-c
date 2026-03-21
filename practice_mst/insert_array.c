#include <stdio.h>
int main(){
    int r,c, r1,c1,new;
    printf("Enter number of rows :");
    scanf("%d",&r);
    printf("Enter number of columns: ");
    scanf("%d",&c);
    int arr[r][c+1];
    for (int i =0;i<=r;i++){
        for(int j=0;j<=c;j++){
            printf("Enter value for r%d, c%d",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter the row position of the number to be replaced: ");
    scanf("%d",&r1);
    printf("Enter the column position of number to be replaced: ");
    scanf("%d",&c1);
    printf("Enter the value of the new element: ");
    scanf("%d",&new);
    
}