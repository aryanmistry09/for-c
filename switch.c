#include <stdio.h>
int main()
{
    int a,b,choose;
    printf("Enter a = ");
    scanf("%d",&a);
    printf("Enter b = ");
    scanf("%d",&b);
    printf("Enter a choose 1=add, 2=sub, 3=multi, 4=div = ");
    scanf("%d",&choose);
    switch(choose)
    {
        case 1:
            printf("a+b = %d",a+b);
            break;
        case 2:
            printf("a-b = %d",a-b);
            break;
        case 3:
            printf("a*b = %d",a*b);
            break;
        case 4:
            printf("a/b = %d",a/b);  
            break;
        deafult:
            printf("nothing"); 
            break;
    }
    return 0;
}