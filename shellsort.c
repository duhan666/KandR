#include <stdio.h>

void shellsort(int *s,int n){
    int gap;
    int i;
    int j;
    int temp;
    for(gap = n/2;gap>0;gap=gap/2)
        for(i=gap;i<n;i++)
            for(j=i-gap;j>=0;j-=gap){
                if(s[j]>s[j+gap]){
                    temp = s[j];
                    s[j] = s[j+gap];
                    s[j+gap]=temp;
                    //printf("%d\n",n);
                }
            }
}


void main(){
    int s[]={1231,434,2,454,3,67,236,43,9393,2332,3345,34,6,4,230};
    int N;
    N = sizeof(s)/sizeof(int);
    //printf("%d\n",N);
    shellsort(s,N);
    //printf("%d\n",N);
    int i;
    for(i=0;i<N;i++){
        printf("%d\n",s[i]);
    }
}
