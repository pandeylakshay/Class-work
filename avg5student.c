#include<stdio.h>
int main()
{
    int size,t=0,i,avg;
    printf("enter number of students\n");
    scanf("%d",&size);
    int a[size];
    for (i=0;i<size;i++)
    {
        printf("enter marks of student:%d\n",(i+1));
        scanf("%d",&a[i]);
        t=t+a[i];
    } avg=t/size;
    printf("TOTAL=%d\n",t);
    printf("AVERAGE=%d\n",avg);
}