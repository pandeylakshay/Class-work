#include<stdio.h>
int main()
{
    int i,j,n,c;
    printf("enter no of rows\n");
    scanf("%d",&n);
    c=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1||i==n||j==1||j==n||i==j||j==c)
            printf(" *");
            else
            printf("  ");
        }
        printf("\n");
        c--;
    }
    return 0;
}