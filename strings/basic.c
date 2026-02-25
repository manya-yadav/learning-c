#include <stdio.h>
int main(){
    char arr[]="atetf"; //=char arr[5]={'a','t','e','t','f'};
    int i=0;
    while(arr[i]!='\0'){
        printf("%c",arr[i]);
        i++;
    }
}