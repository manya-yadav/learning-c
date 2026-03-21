#include <stdio.h>
int main(){
    char str[40];
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    int i=0;
    while(str[i]!='\0'){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
        else if(str[i]>='A'&& str[i]<='Z'){
            str[i]=str[i]+32;
        }
        i++;
    }
    printf("%s",str);
}