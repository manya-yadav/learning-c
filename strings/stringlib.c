#include <stdio.h>
#include <string.h>
int main(){
    char str[40];
    printf("Enter your name: ");
    //scanf("%s",str);//only takes first word
    scanf("[^\n]%s",str); //takes multiple words
    char n[40];
    puts("Enter a number");
    gets(n);
    printf("%s",str);
}