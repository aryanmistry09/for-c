#include <stdio.h>
void main()
{
    int a,revers=0,reminder,arms=0,org;
    printf("Enter the value of a= ");
    scanf("%d",&a);
    org=a;
    for(;a!=0;a/=10)
    {
        reminder=a%10;
        arms=arms+(reminder*reminder*reminder);
        revers=revers*10 + reminder;
    }
    printf("revers number =%d\n",revers);
    if(org==arms)
        printf("aramstrong = %d",arms);
    else
        printf("not armstrong");
}
