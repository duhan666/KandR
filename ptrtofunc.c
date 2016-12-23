#include <stdio.h>

int max(){
    printf("函数输出最大值\n");

    return 1;
}

int min(int(*p)()){
    printf("函数输出最小值\n");
    (*p)();
    return 1;
}


void main(){
    int (*p)();
    p = min;
    (*p)(max);
}
