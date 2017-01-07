#include <stdio.h>

void printd(int n){
    if(n<0){
        n=-n;
        printf("%c",'-');
    }
    if(n/10){
        printd(n/10);
    }
    printf("%c",n%10+'0');
}


void main(){
    printd(-123);
}
