#include<stdio.h>
int main()
{
    int a[12],i,n,e,pos,temp;
    printf("enter no.of elements in array\n");
    scanf("%d",&n);
    printf("enter elements to array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("array before insertion\n");
     for(i=0;i<n;i++)
    printf("%d,",a[i]);
    printf("enter pos and element to be inserted\n");
    scanf("%d %d",&pos,&e);
    for(i=n;i>pos-1;i--)
    {
     a[i]=a[i-1];
    }
    a[pos]=e;
    printf("array after insertion\n");
    for(i=0;i<=n;i++)
    printf("%d,",a[i]);
}