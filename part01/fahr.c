#include <stdio.h>
/*
 * 当fahr = 0,20,..,300时候，分别打印华氏温度和摄氏温度对照表
 * c语言中所有变量必须先声明后使用，类型 变量名组成
 * 跟golang不同，golang是  var a int = 1这样的方式
 * 或a := 1定义变量
 *
 * printf函数并不是c语言本身的一部分，c语言本身并没有定义输入和输出功能
 * 它仅仅是标准库函数中的一个有用的函数而已，这些标准库函数在c语言程序中
 * 通常都可以直接使用
 */

int main()
{
	int fahr, cels, lower, upper, step;
	lower = 0;   //温度表的下限
	upper = 300; //温度表的上限
	step = 20;   //步长
	fahr = lower;
	while (fahr <= upper)
	{
		cels = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, cels);
		fahr = fahr + step;
	}

	return 0;
}
/**
 * $ cc fahr.c -o fahr.out
heige@daheige:/web/hg-c/part01$ ./fahr.out
0	-17
20	-6
40	4
60	15
80	26
100	37
120	48
140	60
160	71
180	82
200	93
220	104
240	115
260	126
280	137
300	148
*/
