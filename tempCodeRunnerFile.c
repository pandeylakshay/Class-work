#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp,r,count=0,sum=0;
    printf("enter a number\n");
    sacnf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        count++;
        temp=temp/10;        
    }
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+pow(r,count);
        temp=temp/10;
    }
     if ( n== sum )
      printf("\n %d is Armstrong Number.\n",n);
  else
      printf("\n %d is not armstrong.\n",n);
 
  return 0;
}

