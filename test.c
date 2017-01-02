#include <stdio.h>
#include <string.h>

#define NUM 0

int isnum(char p){
    if(p>='0'&&p<='9')
        return 1;
    else
        return 0;
}

int isymbol(char p){
    if(p=='+'||p=='-'||p=='*'||p=='/')
        return 1;
    else
        return 0;
}

int getch(){
    return (bufp>0)? buf[--bufp]:getchar();
}

void ungetch(int c){
    if(bufp>bufsize)
        printf("the buffer is full!");
    else
        buf[bufp++]=c;
}

int getop(char s[]){
    int c;
    int i;
    c = getch();
    if(isymbol(c)){
        s[0] = c;
        s[1] = '\0';
        return c;
    }
    else if(isnum(c)){
        s[0]=c;
        i=1;
        while( isnum( c=getch() ) ){
            s[i]=c;
            s[++i]='\0';
            return NUM;
        }
        ungetch(c)
    }
    else if(c == EOF)
        return c;
    else
        return c;
}

void main(){
    char s[50];
    int type ;
    while( (type=getop(s)) != EOF){
            printf("%s\n",s);
    }
}


