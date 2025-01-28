#include <stdio.h>
int main()
{
    int product=1;
    int n;
    int i=1;
    printf("Enter a no for fectorial = ");
    scanf("%d",&n);
    while(i<=n)
    {
       // printf("%d\n",product*=i);
        product*=i;
        i++;
    }
    printf("the product of n =%d\n",product);
}