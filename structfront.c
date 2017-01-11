#include <stdio.h>

#define BUFSIZE 100
#define WORDLEN 50


int bufp = 0;
char buf[BUFSIZE];

int getch(){
    return bufp>0 ? buf[--bufp]:getchar();
}

void ungetch(int x){
    if(bufp<BUFSIZE-1){
        buf[bufp++] = x;
    }
    else
        printf("The buffer is full!\n");
}

int ispace(char x){
    return x == ' '? 1:0;
}

int isalpha(int x){
    if(x>='a'&&x<='z')
        return 1 ;
    else if(x>='A'&&x<='Z')
        return 2 ;
    else
        return 0;
}


int getword(char *w){
    int c;

    int lim = WORDLEN;
    while(ispace(c = getch()))
        ;
    if(c!=EOF)
        *w++ = c;
    if(!isalpha(c)){
        *w = '\0';
        return c;
    }
    for(;--lim;w++){
        //printf("here!");
        if(!isalpha(*w = getch())){
            ungetch(*w);
            break;
        }
    }
    *w = '\0';
    return w[0];
}

int bisearch(int tar, int v[], int n){

}



main(){
    int v[] = {1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31};
    int n = sizeof(v)/sizeof(v[0]);
    printf("%d\n",n);

}

