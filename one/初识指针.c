
#include <stdio.h>


int main() {
	int a = 11;//a���ڴ��з����ַ-4�ֽ�
	printf("%p\n", &a);//%pר��������ӡ��ַ
	int* pa = &a;//pa��������ŵ�ַ�ģ���C������pa��ָ�����
	//*˵��pa��ָ�����
	//int˵��paִ�еĶ�����int����
	*pa = 15;
	printf("%d\n", *pa);
	return 0;
}

