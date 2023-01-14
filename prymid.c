#include<stdio.h>
int main()
{
    int j,i,k;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf(" *");
        }
        printf("\n");
    }
}