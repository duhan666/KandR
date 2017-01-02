#include <stdio.h>


/*
//the value of EOF
main(){
    int c = EOF;
    printf("%c\n",c);
}*/


//'\n' is a regular char!
/*main(){
    int c = 0;
    int t;
    while( (t=getchar())!=EOF ){
        if(t == '\n')
        c++;
    }
    printf("%ld\n",c);
}
*/

//print char,just for fun
void delay(int n){
    int i;
    for(i=n*1000;i>0;i--);
}

main(){
    int c = 22000;
    while(c<23000){
        delay(5000);
        if(c%30 == 0)
            printf("%c",'\n');
        printf("%c",c);
        c++;
    }
}
