//This are some exercise to show how diffrent code shows diffrent output

#include <stdio.h>
#define MSSG "Hello! World.\n"
void main()
{
    printf(MSSG);

    printf("Indian \b is great \n");

    printf("New\r Delhi\n");

    int a = 11;
    printf("a = %d \t",a);
    printf("a = %o\t",a);
    printf("a = %x\n",a);
}