#include <stdio.h>

#define BUFSIZE 100
#define WORDLEN 50


int bufp = 0;
char buf[BUFSIZE];

struct key{
    char *word;
    int count;
}keytab[]={
    {"auto",0},{"break",0},{"case",0},{"void",0},
};

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

int strcmp(char *p,char *q){
    while( *p!='\0' && *q!='\0' ){
        if(*p == *q){
            p++,q++;
        }
        else if(*p > *q){
            return -1;
        }
        else
            return 1;
    }
    return 0;
}
/*
int bisearch(char tar[],struct key keytab, int n){
    int low,mid,high;
    low = 0;
    high = n-1;
    while(low<=high){
        mid = (low+high)/2;
        if(v[mid]>tar)
            high = mid - 1 ;
        else if(v[mid]<tar)
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}
*/


main(){
/*  int v[] = {1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31};
    int n = sizeof(v)/sizeof(v[0]);
    int c = bisearch(21,v,n);
    printf("%d\n",c); */

}

