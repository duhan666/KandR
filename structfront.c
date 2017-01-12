#include <stdio.h>

#define BUFSIZE 100
#define WORDLEN 50


int bufp = 0;
char buf[BUFSIZE];

struct key{
    char *word;
    int count;
}keytab[]={
    "auto",0,
    "break",0,
    "case",0,
    "void",0
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
    while(*p == *q){
        if(*p == '\0')
            return 0;
    p++,q++;
    }
    return *q - *p;

}

int bisearch(char tar[],struct key keytab[], int n){
    int low,mid,high;
    low = 0;
    high = n-1;
    while(low<=high){
        mid = (low+high)/2;
        if(strcmp(keytab[mid].word,tar)<0)
            high = mid - 1 ;
        else if(strcmp(keytab[mid].word,tar)>0)
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}



main(){
    char w[WORDLEN];
    int n;
    while(getword(w)!=EOF)
        if((n = bisearch(w,keytab,4))>=0)
            keytab[n].count++;
    int i ;
    for(i=0;i<4;i++)
        printf("%s\t%d\n",keytab[i].word,keytab[i].count);
}

