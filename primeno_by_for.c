//prime number
#include <stdio.h>
int main()
{
    int i;
    printf("Enter number =");
    scanf("%d",&i);
    if(i%2==0 || i%3==0 || i%5==0 || i%7==0)
    {
        printf("the number is not prime number = %d\n",i);
    }
    else
    {
        printf("The number is prime number = %d",i);
    }
    return 0;
}