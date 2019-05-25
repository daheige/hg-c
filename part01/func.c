#include <stdio.h>

//函数原型
int power(int m, int n);

int main()
{
    printf("2 的3次方: %d", power(2, 3));

    int i = 12, j = 123; //可以多次值一起声明并赋值
    printf("i = %d,j = %d", i, j);
    return 0;
}

//函数定义  返回值类型 函数名称（0个参数或多个参数） { //代码块...}
int power(int base, int n)
{
    int i, p = 1;
    for (i = 1; i <= n; ++i)
    {
        p = p * base;
    }

    return p;
}
