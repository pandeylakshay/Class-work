#include<stdio.h>
int main()
{
    int a[10],i,j,n,c=0;
    printf("enter elememts to array\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    printf("array before deletion\n");
    for(i=0;i<10;i++)
    printf("%d,",a[i]);
    printf("\n");
    printf("enter the no.to be deleted\n ");
    scanf("%d",&n);
        for(i=0;i<10;i++)
        {
            
            if(a[i]==n)
            {
                c++;
               for(j=0;j<n;j++)
               a[j]=a[j+1];
            }            
        }
        printf("array after deletion\n");
            for(i=0;i<10-c;i++)
            printf("%d,",a[i]);
            return 0;
}