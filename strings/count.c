//WAP to count number of vowels, consonants, digits and spaces in a string.
#include <stdio.h>
int main(){
    char str[40];
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    int vowel=0,con=0,digit=0,space=0;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U'){
            vowel++;
        }
        else if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z')){
            con++;
        }
        else if(str[i]>='0' && str[i]<='9'){
            digit++;
        }
        else if(str[i]==' '){
            space++;
        }
        i++;
    }
    printf("The number of vowels is %d\n number of consonants is %d\n number of digits is %d\n number of spaces is %d\n",vowel,con,digit,space);
}