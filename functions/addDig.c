#include <stdio.h>
int addDig(int x){
    int sum=0;
    int digit;
    while(x>0){
        digit=x%10;
        sum=sum+digit;
        x=x/10;
    }
    return sum;
}
int main(){
    printf("Enter a number: ");
    int n;
    scanf("%d",&n);
    printf("The sum of digits of entered number is : %d",addDig(n));
}