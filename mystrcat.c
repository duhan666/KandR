#include <stdio.h>

int mystrlen(char* s){
    int i=0;
    while( *(s+i)!='\0' )
        i++;
    return i;
}

void mystrcat(char*s,char*t){
    /*while(*s!=0){
        *s++;
    }
    while(*t!=0){
        *s++ = *t++;
    }*/
    int i = 0;
    int N = mystrlen(s);
    while(*(t+i)!=0){
        *(s+N+i)=*(t+i);
        i+=1;
    }
}

void main(){
    char s[50] = "abcdefg";
    char w[] = "hijklmnopq";
    //printf("%d\n",mystrlen(s));
    //printf("%d\n",mystrlen(w));
    mystrcat(s,w);
    printf("%s",s);
}



