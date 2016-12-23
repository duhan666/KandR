#include <stdio.h>
#include <string.h>
#define MAXLINE 100



int getline(char *s,int limit){
    int i;
    char c;
    for(i=0;(i<limit-1)&&((c=getchar())!='\n');i++)
        s[i] = c;
    s[i] = '\0';
    return i;
}

int readline(char* P[],int maxl){    //输入的每一行的最大值是max
   int i=0;
   while(getline(P[i],maxl)>0){
    i++;
   }
    return i;
}


void main(){
//    char *pointer[MAXLINE];
//    char s[MAXLINE];
//    getline(pointer[0],MAXLINE);

    char *p;
    p[0]='A';
    //getline(p,MAXLINE);
    //printf("%s\n",p);
}









