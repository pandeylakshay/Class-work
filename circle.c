#include<stdio.h>
int main()
{
    int x,y,r,dis,d;
    printf("enter radius and coordinates\n");
    scanf("%d %d %d",&r,&x,&y);
    dis=x*x+y*y;
    d=r*r;
    if(dis>d)
    {
        printf("point lies outside circle\n");
    }
    else if(dis==d)
    {
        printf("point lies on circle\n");
            }
   else
   {
      printf("point lies inside circle\n");
   }
}