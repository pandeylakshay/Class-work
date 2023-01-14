#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter number - ");
    scanf("%d",&n);
    for (i = 0; i <= 20; i++)
    {
        printf("n X %d = %d\n", i, n * i);
    }
    return 0;
}