#include <stdio.h>
#include <string.h>


void bubble(char *p){
    int i , j ;
    char temp;
    int N = strlen(p);
    for(j=0;j<N;j++)
        for(i=0;i<(N-j-1);i++){
            if(p[i]>p[i+1]){
                temp = p[i];
                p[i] = p[i+1];
                p[i+1] = temp;
            }
        }

}

void main(){
    char str[] = "qwertyuiopcvbnmgbhnjh";
    bubble(str);
    printf("%s",str);
}
