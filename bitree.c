#include <stdio.h>
#include <string.h>
#include <malloc.h>

#define BUFFSIZE 100
#define WORDLEN 50

int bufp = 0;
int buffer[BUFFSIZE];


int getch(){
    return bufp>0 ? buffer[--bufp] : getchar();
}

void ungetch(int bw){
    if (bufp<BUFFSIZE)
        buffer[bufp++] = bw;
    else
        printf("error, the buffer is full!!");
}

int isalpha(int p){
    if(p>='a'&&p<='z')
        return 1;
    else if(p>='A'&&p<='Z')
        return 2;
    else
        return 0;
}

int myscmp(char*p,char*s){
    while(*p == *s){
        if(*p=='\0')
            return 0;
    //printf("%c\t%c\n",*s,*p);
        *p++,*s++;
    }
    return *s - *p;
}

struct tnode{
    char *word;
    int count;
    struct tnode *left;
    struct tnode *right;
};


char* wordspace(char *s){
    char *p;
    p = (char *)malloc(strlen(s)+1);
    if(p!=NULL);
        strcpy(p,s);
    return p;
}

int getword(char *p){
    int c;
    c=getch();
    if(c == EOF)
        return c;
    ungetch(c);
    while(!isalpha(c=getch()))
        ;
    *p = c;
    while((c=getch())!=' ')
        *++p = c;
    *++p = '\0';
    return p[0];
}


char * strmem(char * w){
    char *p = (char *)malloc(strlen(w)+1);

}


void addtree(struct tnode *tree,char *w){
    if(tree == null){
        tree = (struct tnode *)malloc(sizeof(struct tnode));
        tree->word = (char *)malloc(strlen(w)+1);??
        tree->left = tree->right = NULL;
        tree->count = 1;
    }
    else if(myscmp(tree.word,w)>0){
        addtree(tree.left,w);
    }
    else if(myscmp(tree.word,w)<0){
        addtree(tree.right,w);
    }
    else {
        tree.count++;
    }
}


void main(){
    char s[WORDLEN];
    getword(s);
    printf("%s\n",s);

}


