#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],sum[3][3],mul[3][3],i,j,k;
    printf("enter first matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    }
    printf("enter second matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&b[i][j]);
    }
    printf("enter first matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        sum[i][j]=a[i][j]+b[i][j];
    }
    printf("SUM OF MATRIX\n");
       for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("%d  ",sum[i][j]);
        printf("\n");
    }
    for(i=0;i<3;i++)    
{    
for(j=0;j<3;j++)    
{    
mul[i][j]=0;    
for(k=0;k<3;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
} 
printf("MULTIPLICATION OF MATRIX\n");
       for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("%d  ",mul[i][j]);
        printf("\n");
    }
    return 0;
}