#include<stdio.h>
int main ()
{
    int a[5],i;
 printf("eneter elements to array\n");
 for(i=0;i<5;i++)
 scanf("%d",&a[i]);
 printf("enter the element to be searched\n");
 int n,c=0;
 scanf("%d",&n);
   for(i=0;i<5;i++)
   {
    if(a[i]==n)
    {
        printf("element %d is present at index %d",n,i);
        c=1;
        break;
    }
   } 
   if(c==1)
   {
    printf("");
       } 
       else
       printf("elemnt %d is not present",n);
}