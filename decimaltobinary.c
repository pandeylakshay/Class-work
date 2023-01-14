#include<stdio.h>
int main()
{
    int d,r=0,n,a[15],i;
   
    printf("enter a number to be convereted\n");
    scanf("%d",&d);
    n=d;
    while(n>0)
    {
        a[r]=n%2;
        r++;
        n=n/2;
    }
    printf("Binary =");
     for (i=r-1;i>=0;i--)
     {
     printf("%d",a[i]);
}
}
