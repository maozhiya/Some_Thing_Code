#include <stdio.h>
int main()
{
    int i, n;
    double sum = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        sum = sum * i;
    printf("%d!=%lf", n, sum);
    printf("\n");
    return 0;
}