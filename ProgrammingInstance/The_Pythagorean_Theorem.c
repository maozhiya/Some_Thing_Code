#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, count = 0;
    printf("100以内的勾股数有：\n");
    printf("  a     b    c       a     b    c       a     b    c       a     b    c\n");
    /*求100以内勾股数*/
    for (a = 1; a <= 100; a++)
        for (b = a + 1; b <= 100; b++)
        {
            c = (int)sqrt(a * a + b * b);                                                  /*求c值*/
            if (c * c == a * a + b * b && a + b > c && a + c > b && b + c > a && c <= 100) /*判断c的平方是否等于a2+b2*/
            {
                printf("%4d %4d %4d     ", a, b, c);
                count++;
                if (count % 4 == 0) /*每输出4组解就换行*/
                    printf("\n");
            }
        }

    printf("\n");
    return 0;
}