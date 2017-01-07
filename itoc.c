#include <stdio.h>
#include <string.h>


void reverse(char *s){
    int i = 0;
    char temp;
    int j = strlen(s)-1;
    while (i<j){
        temp=s[i],s[i]=s[j],s[j]=temp;
        i++,j--;
    }
}


void itoc(int n,char s[]){
    n<0 ? n=-n:n;
    int i = 0;
    do
        s[i++] = n%10+'0';
    while( (n/=10)>0 );
    s[i] = '\0';
    reverse(s);
}



void main(){
    int n =-123;
    char s[10];
    itoc(n,s);
    printf("%s\n",s);
 /*   char s[]="abcdefg";
    printf("%s\n",s);
    reverse(s);
    printf("%s\n",s);*/
}
