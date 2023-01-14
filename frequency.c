#include<stdio.h>
int main()
{
    int a[10],z=0,p=0,n=0,i;
    printf("enter elements to arrray\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
        if(a[i]==0)
        z++;
        else if(a[i]>0)
        p++;
        else
        n++;
    }
    printf("NO OF ZEROS=%d\n",z);
    printf("NO OF POSITIVE NUMBERS=%d\n",p);
    printf("NO OF NEGATIVE NUMBERS=%d\n",n);
}