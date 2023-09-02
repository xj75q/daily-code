#include <stdio.h>
#include <string.h>

void main(){
  char name[50];
  printf("Enter name:");
  fgets(name,50,stdin);
  puts(name);
}