#include <stdio.h>
#include <string.h>
#include <malloc.h>

#define LEN 50
#define MAX 20



int getline(char *s){
    int c,counter=0;
    while( (c=getchar())!='\n'){
        *s++=c;
        counter++;
    }
    *s = '\0';
    return counter;
}

void mystrcpy(char *p, char *q){
    while((*(p++)=*(q++))!='\0')
    *p = '\0';
}

void readlines(char *s[]){
    char p[LEN];
    int ctr;
    while( ctr=getline(p) ){
        char *ptr = (char *)malloc(strlen(p));
        mystrcpy(ptr,p);
        *s++ = ptr;
    }
}

void main(){
    char s[LEN];
    int c = getline(s);
    printf("%d\n",c);
}

