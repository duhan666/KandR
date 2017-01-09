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

int readlines(char *s[]){
    char p[LEN];
    int ctr;
    int c=0;
    while( ctr=getline(p) ){
        char *ptr = (char *)malloc(strlen(p));
        mystrcpy(ptr,p);
        *s++ = ptr;
        c++;
    }
    return c;
}



void main(){
    char *s[LEN];
    int c;
    c = readlines(s);
    int i;
    for(i=0;i<c;i++)
        printf("%s\n",s[i]);
}

