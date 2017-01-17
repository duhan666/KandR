#include <stdio.h>
#include <string.h>
#include <malloc.h>

#define BUFFSIZE 100
#define WORDLEN 50

int bufp = 0;
int buffer[BUFFSIZE];


int getch(){
    return bufp>0 ? buffer[--bufp] : getchar();
}

void ungetch(int bw){
    if (bufp<BUFFSIZE)
        buffer[bufp++] = bw;
    else
        printf("error, the buffer is full!!");
}

int isalpha(int p){
    if(p>='a'&&p<='z')
        return 1;
    else if(p>='A'&&p<='Z')
        return 2;
    else
        return 0;
}

int strcmp(char*p,char*s){
    while(*p++ == *s++){
        ;
    }

}

struct tnode{
    char *word;
    int count;
    struct tnode *left;
    struct tnode *right;
};


char* wordspace(char *s){
    char *p;
    p = (char *)malloc(strlen(s)+1);
    if(p!=NULL);
        strcpy(p,s);
    return p;
}

int getword(char *p){
    int c,n=0;
    while( (c = getch()) !=' '){
        *p++ = c;
        n++;
    }
    *p='\0';
    return n;
}



void addtree(struct tnode *tree){

}


void main(){
    char s[WORDLEN];
    getword(s);
    printf("%s\n",s);
}


