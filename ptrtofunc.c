#include <stdio.h>

int max(){
    printf("����������ֵ\n");

    return 1;
}

int min(int(*p)()){
    printf("���������Сֵ\n");
    (*p)();
    return 1;
}


void main(){
    int (*p)();
    p = min;
    (*p)(max);
}
