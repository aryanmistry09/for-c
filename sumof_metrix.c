#include <stdio.h>
int main()
{
    int arr[3][2],b[3][2],c[3][2];
    printf("Enter the element for a array\n");
    for (int i=0;i<3;i++)
        for (int j=0;j<2;j++)
            scanf("%d",&arr[i][j]);
    for (int i=0;i<3;i++)
        for (int j=0;j<2;j++)
            scanf("%d",&b[i][j]);
    for (int i=0;i<3;i++)
    { 
        for (int j=0;j<2;j++)
        {   
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for (int i=0;i<3;i++)
    { 
        for (int j=0;j<2;j++)
        {   
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    for (int i=0;i<3;i++)
    { 
        for (int j=0;j<2;j++)
        {   
            c[i][j]=arr[i][j]+b[i][j];
        }
        printf("\n");
    }
    printf("The value of c matrix \n");
    for (int i=0;i<3;i++)
    { 
        for (int j=0;j<2;j++)
        {   
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}