//    1(0c0)
//   1 1(1c0,1c1)
//  1 2 1(2c0,2c1,2c2)
// 1 3 3 1(3c0,3c1,3c2,3c3)
//1 4 6 4 1(4c0,4c1,4c2,4c3,4c4)
#include<stdio.h>
int fact(int a){
    int f=1;
    for(int i=1;i<=a;i++){
        f=f*i;
    }
    return f;
}
int combination(int x, int y){
    int com=fact(x)/(fact(y)*fact(x-y));
    return com;
}
int main(){
    int n;
    printf("Enter number of lines: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            int combi=combination(i,j);
            printf("%d ",combi);
        }
        printf("\n");
    }
}
