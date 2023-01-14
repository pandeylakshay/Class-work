#include<stdio.h>

int main()
{
    char ch;
    printf("Enter the character - \n");
    scanf("%c",&ch);
    if(ch>=97 && ch<=122)
    {
        printf("Character is in lower case.");
    }
    else{
        printf("Character is not in lowercase.");
    }
    
    return 0;
}