
//the program is a demo for reversing string ,less than 100 words

#include <stdio.h>
#define strlen 100

char stastr[100];
int sp = 0;

void push(char n){
    if (sp <100){
        stastr[sp++] = n;
    }
    else
        printf("the word is too long!");
}

char pop(){
    if(sp > 0){
        return stastr[--sp];
    }
    else
        printf("the stack is empty");
}

void main(){
    char *str = "Hello";
    while(*str!='\0')
        push(*str++);

    while(sp >= 0){
        printf("%s",pop());
        printf("\n");
    }
}



