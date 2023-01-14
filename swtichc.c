#include<stdio.h>
int main()
{
    char ch;
    printf("enter your choice\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        printf("i am in case a\n");
        break;
        case 'b':
        printf("i am in case b\n");
        break;
        case 'c':
        printf("i am in case c\n");
        break;
        defualt:
        printf("i am in case defualt\n");
    }
}