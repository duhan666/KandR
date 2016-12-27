#include <stdio.h>
#include <string.h>

void main(){
    char s[100];
    int i = 0;
    while((s[i++] = getchar())!='\n')
        ;
        s[i] = '\0';
    printf("%s\n",s);
}
