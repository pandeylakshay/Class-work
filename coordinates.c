#include<stdio.h>
int main()
{
    int x,y;
    printf("enter coordinates\n");
    scanf("%d%d",&x,&y);
    if(x!=0&&y==00)
         {
        printf("point lies on x-axis\n");
         }
        else if (y!=0&&x==0)
            {
                printf("point lies on y-axis\n");
            }
            else if(y==0&&x==0)
            {
                printf("point lies at origin\n");
            }
            else
            {
                printf("point lies any of the quqrdant");
            }
}