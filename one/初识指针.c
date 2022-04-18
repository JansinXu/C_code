
#include <stdio.h>


int main() {
	int a = 11;//a在内存中分配地址-4字节
	printf("%p\n", &a);//%p专门用来打印地址
	int* pa = &a;//pa是用来存放地址的，在C语言中pa叫指针变量
	//*说明pa是指针变量
	//int说明pa执行的对象是int类型
	*pa = 15;
	printf("%d\n", *pa);
	return 0;
}

