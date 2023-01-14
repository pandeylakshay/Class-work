#include<stdio.h>
int main()
{
    int a;
    printf ("enter your choice\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        printf("i am in case 1\n");
        break;
        case 2:
        printf("i am in case 2\n");
        break;
        case 3:
        printf("i am in case 3\n");
        default:
        printf("i am in case defualt");
    }
}