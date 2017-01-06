#include <stdio.h>

void shellsort(int *s,int n){
    int gap;
    int i;
    int j;
    int temp;
    for(gap = n/2;gap>0;gap--)
        for(i=0;i<gap;i++)
            for(j=0;(gap*j+i)<n;j++){
                if(s[gap*j+i]>s[gap*j+gap+1]){
                    temp = s[gap*j+i];
                    s[gap*j+i] = s[gap*j+gap+1];
                    s[gap*j+gap+1]=temp;
                }
            }
}

void main(){
    int s[]={1231,434,2,454,3,67,236,43,9393,2332,3345,34,6,4,230};
    int N = sizeof(s)/sizeof(int);
    //printf("%d\n",N);
    shellsort(s,N);
    int i;
    for(i=0;i<N;i++){
        printf("%d\n",s[i]);
    }
}
