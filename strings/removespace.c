#include<stdio.h>
int main(){
    char str[40];
    printf("Enter a string: ");
    scanf(" %[^\n]",str);
    int i=0;
    while(str[i]!='\0'){
        if(str[i]==' '){
            for(int j=i;str[j]!='\0';j++){
            str[j]=str[j+1];
            }
        }
        else{
        i++;}
    }
    printf("%s",str);
}