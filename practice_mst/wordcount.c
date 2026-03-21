#include <stdio.h>
int main(){
    char str[40];
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    int i=0;
    int word=1;
    while(str[i]!='\0'){
        if(str[i]==' '){
            word++;
        }
        i++;
    }
    printf("The number of words are: %d",word);
}