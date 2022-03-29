/*
斐波那契 数组和递归实现
打印前45位斐波那契数列的时候可以看到 数组的运算效率比递归要高许多
*/
#include <stdio.h>

//斐波那契数列-数组实现, 打印前n位的斐波那契列数
void fbiArray(int n)
{
    int i;
    int arr[n];
    arr[0] = 0;
    arr[1] = 1;
    printf("%d %d ", arr[0], arr[1]);
    for (i = 2; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
        printf("%d ", arr[i]);
    }
}

//斐波那契数列-递归实现
int fbiFunction(int i)
{
    if (i < 2)
    {
        return i == 0 ? 0 : 1;
    }
    return fbiFunction(i - 1) + fbiFunction(i - 2);
}

int main(void)
{
    printf("\n 1.斐波那契数列-数组实现 \n 2.斐波那契数列-递归实现\n 0.退出\n");
    int option = 1, n, i;
    while (option)
    {
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("请输入斐波那契列数\n");
            scanf("%d", &n);
            fbiArray(n);
            printf("\n");
            break;
        case 2:
            printf("请输入斐波那契列数\n");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                printf("%d ", fbiFunction(i));
            }
            printf("\n");
            break;
        case 0:
            return 0;
        }
    }
    return 0;
}
/*
从运行的时间上来看, 当要输出前n位斐波那契数列,n比较大时,
使用数组实现 运行效率是比较高的
使用递归方式 运行效率就大大折扣了

递归使用的是选择结构,而迭代使用的是循环结构.
递归能使程序的结构更加清晰,更加简洁,更容易让人理解,从而减少读懂代码的时间,
但大量的递归调用会建立函数的副本,会消耗大量的时间和内存.迭代不不需要反复调用函数和占用额外的内存.

*/