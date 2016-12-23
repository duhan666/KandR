#include <stdio.h>


int isnum(char p){
    if(p>='0'&&p<='9')
        return 1;
    else
        return 0;
}

float strtonum(char *str){
    int i = 0;
    float val = 0.0;
    int sign = 1;
    float ton = 1.0;

    //处理正负号
    if((str[i]=='+')||(str[i]=='-')){
        sign = (str[i]=='-')? -1 : 1;
        i++;
    }

    while(isnum(str[i])){
        val = val*10+str[i]-'0';
        printf("%f\n",val);
        i++;
    }
    if(str[i]=='.'){
        i++;
        while(isnum(str[i])){
            val = val*10+str[i]-'0';
            printf("%f\n",val);
            i++;
            ton*=10;
        }
        return sign*val/ton;
    }
    else{
        return sign*val;
    }

}

void main(){
    char *p = "-123.56503";
    //strtonum(p);
    printf("final result is:%f\n",strtonum(p));
}
