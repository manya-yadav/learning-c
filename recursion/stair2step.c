#include<stdio.h>
int step(int n){
    if(n==2||n==1) return n;
    int ans=step(n-1)+step(n-2);
    return ans;
}
int main(){
    int n;
    printf("Enter stair number: ");
    scanf("%d",&n);
    printf("Number of ways stairs can be climbed in combination of 1 and 2 steps is %d.",step(n));
}