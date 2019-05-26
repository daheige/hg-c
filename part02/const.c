#include <stdio.h>

//定义宏常量，尽量大写
#define MAX 100
#define STR "daheige"

int main(){
	const int a = 100;//const常量尽量小写

	//定义字符串const常量
	const char *str = "daheige,123";

	printf("MAX = %d,STR = %s,a = %d,str = %s",MAX,STR,a,str);

	return 0;
}
