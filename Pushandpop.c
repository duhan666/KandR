#include <stdio.h>

#define depth 100
#define bufsize 100
#define NUM '0'
#define MAXOP 100

int sp = 0;
int stacka[depth];
char buf[bufsize];
int bufp = 0;

int isnum(char p){
    if(p>='0'&&p<='9')
        return 1;
    else
        return 0;
}

float strtonum(char *str){
    int i = 0;
    float val = 0.0;
    int sign = 1;
    float ton = 1.0;

    if((str[i]=='+')||(str[i]=='-')){
        sign = (str[i]=='-')? -1 : 1;
        i++;
    }

    while(isnum(str[i])){
        val = val*10+str[i]-'0';
        printf("%f\n",val);
        i++;
    }
    if(str[i]=='.'){
        i++;
        while(isnum(str[i])){
            val = val*10+str[i]-'0';
            printf("%f\n",val);
            i++;
            ton*=10;
        }
        return sign*val/ton;
    }
    else{
        return sign*val;
    }

}

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

int getop(char s[]){
    int i = 0;
    int c = 0;
    while( isnum(c=getchar())&&(c!='\n') ){
            s[i++] = c;
    }
    s[i] = '\0';
    return c;
}


void main(){
    int type;
    char s[MAXOP];
    while((type=getop(s))!='\n');
    printf("%s\n",s);
}
