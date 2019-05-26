#include <stdio.h>

int main(){
	int a,b,c;
	a = 1;
	b = 2;
	c = a+b;

	/**
	//采用汇编实现a+b=c
	__asm
	{
	   mov a,1
	   mov b,2
	   mov eax,a
           add eax,b
	   mov c,eax
	}
	*/

	printf("a +b = %d",c);
	return 0;
}

