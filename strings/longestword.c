#include <stdio.h>
int main(){
    char str[40];
    int word=0;
    int longest=0;
    printf("Enter a string: ");
    scanf(" %[^\n]",str);
    int i=0;
    int index=0;
    int maxindex=0;
    while(str[i]!=0){
        index=i;
        while(str[i]!=' ' && str[i]!='\0'){
            word++;
            i++;
        }
        if(word>longest){
            longest=word;
            maxindex=index;
        }
        i++;
        word=0;
    }
    printf("The longest word is: ");
    for(int j=maxindex;j<maxindex+longest;j++){
        printf("%c", str[j]);
    }
    printf("\nThe number of alphabets in word is: %d",longest);

}