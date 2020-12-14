//This are some exercise to show how diffrent code shows diffrent output

#include <stdio.h>
void main()
{
    int a=625, b=2394, c=12345;
    printf("%5d, %5d, %5d\n",a,b,c);
    printf("%3d, %4d, %5d\n",a,b,c);
    
    int x=98;
    char ch = 'c';
    printf("%c, %d\n",x,ch);

    float a1=2,b1=6.8,a2=4.2,b2=3.57,a3=9.82,b3=85.673;
    printf("%3.1f, %4.2f\n",a1,b1);
    printf("%5.1f, %6.2f\n",a2,b2);
    printf("%7.1f, %8.2f\n",a3,b3);

    printf("%10s\n","India");
    printf("%4s\n","India");
    printf("%.2s\n","India");
    printf("%5.2s\n","India");    
}