#include <stdio.h>

int cube(int n){
    return n*n;
}

int max(int a,int b){
    if (a >b){
        return a;
    }else{
        return b;
    }
}

void main(){
    int result1= 0,result2 =0 ;
    int a=10, b = 20,c =0;
    result1 = cube(2);
    result2 = cube(5);
    c = max(a,b);

    printf("^^^ %d   %d\n",result1,result2);
    printf("=======%d\n",c);
}
