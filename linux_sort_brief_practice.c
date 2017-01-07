#include <stdio.h>
#define LEN 50

void getline(char *s){
    int c;
    while( (c=getchar())!=EOF){
        *s++=c;
    *s = '\0';
    }
}




void main(){
    char s[LEN];
    getline(s);
}

