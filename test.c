#include <stdio.h>
//函数原型定义
int test(int a);
void hello(char s[]);
double f(int a, int b);

//如果在main函数之前定义的话，就不需要提前定义函数原型
int max(int a, int b)
{
	if (a > b)
	{
		return a;
	}

	return b;
}

int main()
{
	//字符串定义
	char s[] = "daheige";
	puts(s);
	printf("hello,world\n");
	test(1);
	hello(s);

	int num;
	num = f(1, 3);
	printf("result:%d\n", num);

	printf("max value:%d\n", max(1, 2));

	char arr[100] = "daheige";
	printf("%s", arr);

	//内存地址
	printf("%p", arr);

	for (int i = 0; i < 1e6; i++)
	{
		printf("current index:%d\n", i);
	}

	return 0;
}

int test(int a)
{
	printf("%d", a);
	return a + 1;
}

void hello(char s[])
{
	printf("%s\n", s);
}

double f(int a, int b)
{
	if (a > b)
	{
		return a + 1;
	}

	return b + 3 + a;
}

/*
 * gcc -o test test.c
 * time ./test
 * real	0m5.540s
 * user	0m0.625s
 * sys	0m2.480s
 * 跟golang比较起来，还是会高效一些，执行速度会快1s左右
 */
