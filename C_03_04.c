//This are some exercise to show how diffrent code shows diffrent output

#include <stdio.h>
void main()
{
    int a = 50000;
    unsigned int b = 50000;
    printf("a = %d, b = %u\n",a,b);

    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    printf("%d\n",ch);

    float z = 123.1265;
    printf("%f\t",z);
    printf("%.2f\t",z);
    printf("%.3f\n",z);

}