#include<stdio.h>
int main()
{
    int p,q,d=0,amt;
    printf("enter price and quantity\n");
    scanf("%d %d",& p,& q);
    amt=p*q;
    if(amt>=1000)
    {
      d=.1*amt;
      amt=amt-d;
      printf("discont=%d",d);printf("\n");
      printf("amount=%d",amt);
    }
    else{
      printf("discont=%d",d);printf("\n");
      printf("amount=%d",amt);
    }
}