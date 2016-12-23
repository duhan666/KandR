#include <stdio.h>
#include <string.h>

void main(){
    char c;
    while((c=getchar())!=EOF){
        printf("%c",c);
    }
    printf("EOF is finally done!");
}
