#include <stdio.h>
//ָ�� ���� ��ַ
//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	*pa = 20;//* - �����ò��� *pa����ͨ��pa��ĵ�ַ���ҵ�a
//	printf("%d\n", a);
//	return 0;
//}

//ָ������Ĵ�С
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
//ָ��������ŵ�ַ�ģ�ָ����Ҫ���ռ䣬ȡ�����ַ�Ĵ洢��Ҫ���ٿռ�
//32 λ - 32 bit - 4byte
//64 λ - 64 bit - 8byte