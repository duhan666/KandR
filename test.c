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

int getop(char s[]){
    int c;
    int i=0;
    while( (s[0]=c=getchar())==' '|| c=='\t' );

    i=1;
    while( (c = getchar()) != EOF ){
        if(isnum(c)){
            s[i++]=c;
            s[i]='\0';
        }
        else if(isymbol(c)){
            s[i++]=c;
            s[i]='\0';
            return c;
        }
        else
            return c;
    }
    return NUM;
}

void main(){
    char s[50];
    int type ;
    while( (type=getop(s)) != EOF){
            printf("%s\n",s);
    }
}


