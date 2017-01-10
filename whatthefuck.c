 #include <stdio.h>
 #include <string.h>

 int test(char *p){
    printf("%s\n",p);
 }

void main(){
    char *s  = "hello,world!";
    char t[] = "hello,world!";

    printf("%d\n",sizeof(s));
    printf("%d\n",sizeof(t));
 }
