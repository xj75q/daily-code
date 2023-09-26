#include <stdio.h>

void demo1(){
    int number = 0;
    printf("enter a number:");
    scanf("%d",&number);
    if (number %2 ==0 ){
        printf("%d is even number\n",number);
    }
}

void demo2(){
    int number =0;
    printf("enther a number:");
    scanf("%d",&number);
    if (number%2 ==0){
        printf("%d is even number\n",number);
    }else{
        printf("%d is odd numer\n");
    }
}


void main(){
    //demo1();
    demo2();
}