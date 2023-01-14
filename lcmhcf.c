#include<stdio.h>
int main()
{
 int n1,n2,lcm,hcf,i;
 printf("enter two numbers\n");
 scanf("%d %d",&n1,&n2);
 for(i=1;i<=n1;i++)
 {
    if((n1%i==0)&&(n2%i==0))
    {
        hcf=i;
    }
 }
 lcm=(n1*n2)/hcf;
 printf("HCF=%d LCM=%d",hcf,lcm);
 return 0;
}