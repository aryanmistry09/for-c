#include <stdio.h>
int main() {
    int n;
    float sum = 0.0;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    printf("The sum of the series is: ");
    for(int i = 1; i <= n; i++)
    {

        printf("1/%d", i);
        if(i < n) {
        printf(" + ");
        }
    }
    //printf(" = %.2f\n", sum);

    return 0;
}