#include <stdio.h>
#include <string.h>


void mycpy(char* a[],char* b)
{
    a[0] = b;
}

void main()
{
    char *p[5];
    char q[]="hello";
    mycpy(p,q);
    printf("%s\n",p[0]);
}



void mycpy(char* a,char* b)
{
    a = b;
}

void main()
{
    char *p;
    char q[]="hello";
    mycpy(p,q);
    printf("%s\n",p);
}



