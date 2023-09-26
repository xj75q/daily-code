#include <stdio.h>
void demo1(){
    int number =0;
    printf("enter your num:");
    scanf("%d",&number);
    switch (number)
    {
    case 10:
        printf("<10>number is %d\n",number);
        break;

    case 50:
        printf("<50>number is %d\n",number);
        break;
    case 100:
        printf("<100>numer is %d\n",number);
        break;
    
    default:
       printf("<>number is not equal to 10, 50 or 100\n");
        break;
    }
}

void main(){
    demo1();
}

