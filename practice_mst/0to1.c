#include <stdio.h>
int main(){
    int num=0; 
    int result=0;
    int digit, place=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num>0){
        digit=num%10;
        if (digit==0){
            digit=1;
        }
        result=digit*place+result;
        place=place*10;
        num=num/10;
    }
    printf("%d", result);
}