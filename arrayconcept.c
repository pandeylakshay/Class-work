#include<stdio.h>
int main()
{
    int a[5],i;
    for(i=0;i<5;i++)
    {
        printf("Enter element %dto array:",(i+1));
        scanf("%d",&a[i]);
    }
     printf("Elements of array\n");
     for(i=0;i<5;i++)
     printf("%d,",a[i]);
     printf("\n");
     printf("reversing an array\n");
    for(i=4;i>=0;i--)
     printf("%d,",a[i]);
     printf("\n");
     printf("prinrting elements of array at odd places:- \n");
     for(i=0;i<5;i=i+2)
     printf("%d,",a[i]);
     printf("\n");
    printf("printing elements of array at even place:-\n");
    for(i=1;i<5;i=i+2)
    printf("%d,",a[i]);
    return 0;
}