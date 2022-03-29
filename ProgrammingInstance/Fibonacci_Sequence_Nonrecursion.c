#include <stdio.h>

#define n 5

int main()
{
    int num1 = 1;
    int num2 = 1;
    int tmp = 0;
    int i = 0;
    if (n < 3)
    {
        return 1;
    }
    else
    {
        for (i = 0; i <= n - 3; i++)
        {
            tmp = num1 + num2;
            num1 = num2;
            num2 = tmp;
        }
        return tmp;
    }
}