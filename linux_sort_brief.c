#include <stdio.h>
#include <string.h>
#include <malloc.h>
#define MAXLINE 10
#define MAXLEN 20


int getline(char *s){
    int i;
    char c;
    for(i=0;(c=getchar())!='\n';i++)
        s[i] = c;
    s[i] = '\0';
    return i;
}


int readlines(char *ptr[]){
    char p[MAXLEN],*sld;
    int i=0,len;
    while((len=getline(p))!=0){
        sld = (char*)malloc(len);
        strcpy(sld,p);
        ptr[i++] = sld;
    }
    return i;
}


void writeline(char*pp[],int counter){
    int i;
    for(i=0;i<counter;i++){
        printf("%s\n",pp[i]);
    }
}


void strswap(char*p[],int i,int j){
    char *temp;
    temp = p[i];
    p[i] = p[j];
    p[j] = temp;
}


void myqsort(char *p[],int counter){
    int i , j;
    //char *temp;
    //int N = strlen(p);
    for(j=0;j<counter;j++)
        for(i=0;i<(counter-j-1);i++){
            if(strcmp(p[i],p[i+1])>0){
                strswap(p,i,i+1);
                //temp = p[i];
                //p[i] = p[i+1];
                //p[i+1] = temp;
            }
        }
}


void main(){
    char *p[MAXLINE];
    int c = readlines(p);
    writeline(p,c);
    printf("\n");
    myqsort(p,c);
    writeline(p,c);
//    int counter = readline(pointer, MAXLINE);
//    writelines(pointer,counter);

}









