#include <stdio.h>
int main(){
    int n1,n2;
    char yn, op;
    do{
        printf("Enter first number: ");
        scanf("%d",&n1);
        printf("Enter second number: ");
        scanf("%d",&n2);
        printf("Enter operator -, +, * or / : \n");
        scanf(" %c",&op);
        switch(op){
            case '+':
            printf("The sum is : %d \n",n1+n2);
            break;
            case '-':
            printf("The difference is: %d \n",n1-n2);
            break;
            case '*':
            printf("The product is : %d \n",n1*n2);
            break;
            case '/':
            printf("The quotient is : %d \n",n1/n2);
            break;
            default:
            printf("Invalid Input\n");
            break;
        }
        printf("Would you like to use the calculator again? Enter Y for Yes and N for no ");
        scanf(" %c", &yn);
    }while (yn=='Y');

}