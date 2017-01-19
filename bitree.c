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
    while(isalpha(c=getch()))
        *++p = c;
    *++p = '\0';
    return p[0];
}


char *strmd(char * w){
    char *p = (char *)malloc(strlen(w)+1);
    strcpy(p,w);
    return p;
}


struct tnode* addtree(struct tnode *tree,char *w){
    if(tree == NULL){
        tree = (struct tnode *)malloc(sizeof(struct tnode));
        tree->word = strmd(w);
        tree->left = tree->right = NULL;
        tree->count = 1;
    }
    else if(myscmp(tree->word,w)>0){
        tree->left = addtree(tree->left,w);
    }
    else if(myscmp(tree->word,w)<0){
        tree->right = addtree(tree->right,w);
    }
    else {
        tree->count++;
    }
    return tree;
}

void printree(struct tnode *tree){
    if(tree!=NULL){
        printree(tree->left);
        printf("%s\t%d\n",tree->word,tree->count);
        printree(tree->right);

    }
}


void main(){
    char word[WORDLEN];
    struct tnode *root;
    root = NULL;

    while ( getword(word)!=EOF ){
        root = addtree(root,word);
    }

    printree(root);

}


