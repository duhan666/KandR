#include <stdio.h>

#define depth 100

int sp = 0;
int stacka[depth];

void push(float p){
    if(sp<depth){
        stacka[sp] = p;
        sp++;
    }
    else
        printf("error,the stack is full,cannot push!");
}

double pop(){
    if(sp<0){
        printf("error,the stack is empty,cannot pop");
    }
    else{
        return stacka[--sp];
    }
}

void main(){

}
