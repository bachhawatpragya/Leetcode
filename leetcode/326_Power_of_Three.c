#include<stdio.h>
#include<stdbool.h>
bool isPowerOfThree(int n) {
    if(n<=0){return false;}
    if(n==1){return true;}
    if(n%3!=0){return false;}

    return isPowerOfThree(n/3);
}
int main(){
    int n=27;
    printf("%d\n",isPowerOfThree(n));
    return 0;
}