#include <stdio.h>
//通过for循环打印华氏温度和摄氏温度
int main()
{
	int fahr;
	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
	{
		printf("%3d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	}

	int num;
	num = 2;
	printf("%d", num);
	puts("daheige"); //用于输出字符串并换行
}
