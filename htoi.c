#include <stdio.h>
#include <string.h>
/*
int lower(char c){
    if(c>='A'&&c<='Z')
        c = c-'A'+'a';
    else if(c>='a'&&c<='z')
        ;
    else
        printf("this is not a letter!");
    return c;
}
*/
int ctod(char c){
    if(c>='A'&&c<='F')
        c = c-'A'+10;
    else if(c>='a'&&c<='f')
        c = c-'a'+10;
    else if(c>='0'&&c<='9')
        c = c-'0';
    else{
        printf("wrong input!");
        return -1;
    }
    return c;
}

void main(){
    char c;
    int r=0;
    while( (c=getchar()) !='\n' ){
        r = ctod(c)+r*16;
    }
    printf("%d\n",r);
}
