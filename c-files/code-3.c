#include <stdio.h>
#include <string.h>

void main(){
    char name[50];
    printf("enter your name:");
    fgets(name,50,stdin);
    printf("your name is: ");
    puts(name);
}
    