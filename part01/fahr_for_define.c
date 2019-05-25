#include <stdio.h>
#define LOWER 0   //符号常量 #define 名字  替换文本  后面没有分号
#define UPPER 300 //表的上限
#define STEP 20   //步长

//通过for循环打印华氏温度和摄氏温度
int main()
{
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("%3d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }

    puts("exec end");
}

//$ cc fahr_for_define.c -o a.out
//$ ./a.out运行