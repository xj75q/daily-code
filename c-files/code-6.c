#include <string.h>
#include <stdio.h>

void main(){
    char ch1[32]={'1','2','3'};
    char ch2[10]={'a','b','c'};
    strcat(ch1,ch2); //strcat(dest,scr) 将src追加到dest里，最终得到dest
    printf("str 1 is %s\n",ch1);
}