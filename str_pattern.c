#include <stdio.h>
#include <string.h>

//����p������û�а���q���������������q��p�е�λ��
int strsamepa(char* p, char* q){
    int i=0;
    int j=0;
    int m = strlen(p);
    int n = strlen(q);
    while((i<m)&&(j<n)){
        if(p[i]==q[j]){
            i++;
            j++;
        }
        else{
            i++;
            j = 0;
        }
    }
    if(j==n)
        return i-n+1;
    else
        return -1;
}


void main()
{
    char a[] = "qwerioaigao[wovzvofggheadfFASD";
    char b[] = "rio";
    int c = strsamepa(a,b);
    printf("%d\n",c);

}
