#include <stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int rra[5];
    for(int i=0;i<5;i++){  
            rra[4-i]=arr[i];   
    }
    for(int i=0;i<5;i++){
        printf("%d,",rra[i]);
    }
}