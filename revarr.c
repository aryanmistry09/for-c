#include <stdio.h>
int main()
{
    int j=0,b[3],a[3]={1,2,3};
    for (int i=2;i>=0;i--)
       { b[j]=a[i];
        j++;}
    for(int j=0;j<3;j++)
        printf(" b[%d] = %d\n ",j,b[j]);
    return 0;
}
