#include <stdio.h>
#include <string.h>

void main(){
    char ch1[20] ={'1','2','3','4','5'};
    char ch2[20];
    strcpy(ch2,ch1); //strcpy(dst,src)将src拷贝到dst里
    printf("value of second str :%s\n",ch2);
}