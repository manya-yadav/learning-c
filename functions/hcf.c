#include <stdio.h>
int hcf(int x, int y){
    int min=x>y?y:x;
    int max;
    for(int i=1;i<=min;i++){
        if(x%i==0 && y%i==0){
            max=i;
        }
    }
    return max;
}
int main(){
    int a,b;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    int gcd=hcf(a,b);
    printf("The hcf is %d",gcd);
}