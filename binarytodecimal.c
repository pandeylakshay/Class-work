#include<stdio.h>
#include<math.h>
int main()
{
     long b;int n=0,p=0,r;
     printf("enter a binary number\n");
     scanf("%ld",&b);
     while(b>0)
     {
        r=b%10;
        n=n+(r*pow(2,p));
        b=b/10;
        p++;
    }
    printf("Decimal = %d",n);
}