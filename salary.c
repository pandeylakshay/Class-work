#include<stdio.h>
int main()
{
    int b,h,d,g;
    printf("enter basic salary\n");
    scanf("%d",&b);
    if(b<1500)
    {
        h=.1*b;
        d=.9*b;
        g=b+h+d;
    }
    else
    {
        h=500;
        d=.98*b;
         g=b+h+d;
    }
    printf("salary=%d",b);
    printf("\n");
   printf("HRA=%d",h);    printf("\n");
   printf("DA=%d",d);    printf("\n");
   printf("GROSS SALARY=%d",g);
    return 0;
}