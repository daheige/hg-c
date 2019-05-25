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

int main(){
	//这里采用浮点数更加准确
	float fahr,cels;
	int lower,upper,step;
	lower = 0; //温度表的下限
	upper = 300; //温度表的上限
	step = 20; //步长
	fahr = lower * 1.0;
	while(fahr <= upper){
		cels = 5.0 * (fahr -32.0) /9.0;
		//fahr左边3位对齐，小数部分忽略
		//cels左边6位对齐，保留1位小数
		printf("%3.0f\t%6.1f\n",fahr,cels);
		fahr = fahr +step;
	}

	return 0;
}


/* $ cc fahr_2.c -o fahr2.out
heige@daheige:/web/hg-c/part01$ ./fahr2.out
  0	 -17.8
 20	  -6.7
 40	   4.4
 60	  15.6
 80	  26.7
100	  37.8
120	  48.9
140	  60.0
160	  71.1
180	  82.2
200	  93.3
220	 104.4
240	 115.6
260	 126.7
280	 137.8
300	 148.9
*/

