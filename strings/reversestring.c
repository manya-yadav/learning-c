#include <stdio.h>
#include <string.h>
int main(){
    char str[40];
    printf("Enter a string : ");
    scanf("%s",str);
    int i=0,size=0;
    while (str[i]!='\0'){
        size++;
        i++;
    }
    for(int i=0,j=size-1;i<=j;i++,j--){
        char temp= str[i];
        str[i]=str[j];
        str[j]=temp; 
    }
    puts("The reverse string is: ");
    puts(str);
}