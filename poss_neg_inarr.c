#include <stdio.h>
int main()
{
    int countpos=0,countneg=0,n;
    printf("Enter the how much elements you store in array = ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of arrays = ");
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (int i=0;i<n;i++)
        printf("%d\t",a[i]);
    for (int i=0;i<n;i++)
        if (a[i]>0)
            countpos++;
        else 
            countneg++;
    printf("number of possitive integers = %d\n",countpos);
    printf("number of negative integers = %d",countneg);
    return 0;
}