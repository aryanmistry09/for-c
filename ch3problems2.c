#include <stdio.h>
int main()
{
    int marks1,marks2,marks3;
    printf("Enter your marks1 =");
    scanf("%d",&marks1); 
    printf("Enter your marks2 =");
    scanf("%d",&marks2);
    printf("Enter your marks3 =");
    scanf("%d",&marks3);
    printf("The marks are %d %d and %d\n",marks1,marks2,marks3);
    if(marks1<33||marks2<33||marks3<33)
    {
        printf("YOu are fail\n");
    }
    else if((marks1 + marks2 + marks3)/3<40)
    {
        printf("You are failed due to less %");
    }
    else
    {
        printf("You are pass");
    }
    return 0;
}