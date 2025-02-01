#include <stdio.h>
int main()
{
    char st[4];
    printf("Enter a string = ");
    scanf("%s",st);
    //char st[]={'a','b','c','\0'};
    // char st[]="abc";
    //printf("First charactor is %c %c %c\n",st[0][1][2]);
    /*for (int i=0;i<3;i++)
        printf("charactors = %c \t",st[i]);*/
    printf("string = %s \t",st);
    return 0;
}
