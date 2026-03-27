#include<stdio.h>
int main(){
    void fun(); //the function can be above or below main function, usually its supposed to be in order of function called with main being at bottom
    fun();
    return 0;
}
void fun(){
    printf("hello");
}
