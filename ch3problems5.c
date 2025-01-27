#include <stdio.h>
int main()
{
    char ch;
    printf("Enter character = ");
    scanf("%c",&ch);
    if (97<=ch<=122)
    {
        printf("The character is lower case");
    }
    else{
        printf("The character is not lower case");
    }
    return 0;
}