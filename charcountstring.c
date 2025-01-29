#include <stdio.h>
void main()
{
    int count=0;
    char s[100],ch;
    printf("Enter a string = ");
    scanf("%s",s);
    getchar();
    printf("%s\n",s);
    printf("Enter the charecter = ");
    scanf("%c",&ch);
    for(int i=0;s[i]!='\0';i++)
    {
        if(ch==s[i])
            count++;
    }
    printf("\ncount = %d",count);
}
