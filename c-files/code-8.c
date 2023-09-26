#include <stdio.h>

void hello(){
    printf("hello world !\n");
}

int get(){
    return 10;
}

float get2(){
    return 10.2;
}

int cube(int n){
    return n*n;
}

int add(int a ,int b){
    return a+b;
}


void main(){
    hello();
    
    int value1=get();
    float value2=get2();

    printf("=====%d\n",value1);
    printf("^^^^^%f\n",value2);

    int value3=cube(value1);
    printf("######%d\n",value3);

    float value4=add(value1,value2);
    printf("*****%f\n",value4);
}


