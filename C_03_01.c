//This program illustrats basic io printf scanfs and variable declarations and all.

#include <stdio.h>
void main ()
{
    int b = 500;
    float h = 200.50;
    char g = 'A';
    printf("Basic %d, %f HRA, Grade %c \n",b,h,g);
    int number;
    printf("What's your favorite number?: ");
    scanf("%d", &number);
    printf("I think your favorite number is : %d\n ",number);
}