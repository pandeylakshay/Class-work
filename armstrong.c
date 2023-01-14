#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp,r,count=0,sum=0;
    printf("enter a number\n");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        count++;
        temp=temp/10;        
    }
    temp=n;printf("%d",count);
    while(temp!=0)
    {
        r=temp%10;printf("%d\n",r);
        sum=sum+pow(r,count);
        temp=temp/10;
    }printf("%d",sum);
     if ( n== sum )
      printf("\n %d is Armstrong Number.\n",n);
  else
      printf("\n %d is not armstrong.\n",n);
 
  return 0;
}

