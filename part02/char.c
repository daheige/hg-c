#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "daheige";
    printf("len: %ld\n", strlen(s)); //字符串长度,是一个长整型

    // 声明字符串不能修改
    const char name[] = "daheige";
    puts(name);

    return 0;
}