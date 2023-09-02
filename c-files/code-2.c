#include <stdio.h>

void demo1(){
    char ch[5] ={ 'h', 'e', 'l', 'l', 'o' }; //这里必须用单引号，用双引号会报错
    char ch2[]="hello";
    printf("first:%s\n",ch);
    printf("second:%s\n",ch2);

}


void demo2(){
    char ch[3]={'1','2','3'};
    char ch2[]="hello";
    printf("===%s\n",ch);
    printf("****%s\n",ch2);
}


void main(){
    demo1();
    demo2();
}