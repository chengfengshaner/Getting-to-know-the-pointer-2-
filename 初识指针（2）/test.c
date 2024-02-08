#include <stdio.h>
//指针 就是 地址
//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	*pa = 20;//* - 解引用操作 *pa就是通过pa里的地址，找到a
//	printf("%d\n", a);
//	return 0;
//}

//指针变量的大小
int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));

	return 0;
}
//指针用来存放地址的，指针需要多大空间，取决与地址的存储需要多少空间
//32 位 - 32 bit - 4byte
//64 位 - 64 bit - 8byte