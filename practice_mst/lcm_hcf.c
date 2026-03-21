#include <stdio.h>
int main(){
    int n1,n2;
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter second number: ");
    scanf("%d",&n2);
    int max=(n1>n2)?n1:n2;
    int min=(n1>n2)?n2:n1;
    for( int i=max;i<=n1*n2;i++){
        if(i%n1==0 && i%n2==0){
            printf("%d is the lcm\n",i);
            break;
        }
    }
    for(int i=min;i>=0;i--){
        if(n1%i==0 && n2%i==0){
            printf("%d is the hcf\n",i);
            break;
        }
    }
}