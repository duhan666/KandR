#include <stdio.h>

#define depth 100
#define bufsize 100


int sp = 0;
int stacka[depth];
char buf[bufsize];
int bufp = 0;


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

int getch(){
    return (bufp>0)? buf[--sp]:getchar();
}

void ungetch(int c){
    if(bufp>bufsize)
        printf("the buffer is full!");
    else
        buf[sp++]=c;

}


void main(){

    char a = 'w';
    char b = 'x';
    char c = 'y';
    //printf("%d\n",t);
    ungetch(a);
    ungetch(b);
    ungetch(c);
    printf("%s\n",buf);
}
