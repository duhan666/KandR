/*
#include <stdio.h>

void str_change(char* s){
    s = "changed";
}

void main(){
    char str[] = "original";

    str_change(str);

    printf("%s",str);
}
*/

#include <stdio.h>
#include <string.h>
#define MAXN 100
void reverse(char** s)
{
/*    char* p = str + strlen(str)-1;
    printf("%s\n",p);
    char temp;
    temp = *p;
    *p   = *str;
    *str = temp;*/
    *s = "changed";
}

int main()
{
    char* str= "original";
    reverse(&str);
    printf("%s",str);
    return 0;
}


/*
#include <stdio.h>
#include <string.h>
#define MAXN 1000
void reverse(char* str)
{
    char* p = str + strlen(str)-1;
    char temp;
  //  while(str<p)
   // {
        temp=*p;
        *p--=*str;
        *str++=temp;
   // }
}
int main()
{
    char str[] = "123456789";
    reverse(str);
    printf("��ת����ַ�����:\n%s\n", str);
    return 0;
}


#include <stdio.h>
#include <string.h>
#define MAXN 1000
void reverse(char* str)
{
    char* p = str + strlen(str)-1;
    char temp;
    while(str<p)
    {
        temp=*p;
        *p--=*str;
        *str++=temp;
    }
}
int main()
{
    char str[MAXN];
    printf("������һ���ַ���:\n");
    gets(str);
    reverse(str);
    printf("��ת����ַ�����:\n%s\n", str);
    return 0;
}
*/

