// ������
#include <stdio.h>

//������ �������� ���� ������ : �̸�, �ּ�, ��

void TestFunc(int* number)
{
	*number += 10;
	//printf("%d", number);
}

void Add(int* num1, int* num2, int* result)
{
	*result = *num1 + *num2;
}

int main()
{
    
	int num1, num2, max;
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	Add(&num1, &num2, &max);
	printf("%d", max);

	int a = 10;

	int num = 10;
	TestFunc(&num);
	//printf("%d", num);

	int* pointer; //������ ���� ����
	//������ ������ ������
	//������ ������ ���� ���� �ʰ� ������ �ּҰ��� ����
	pointer = &a; //�����Ͱ� a�� �ּҸ� ������ �޴´�

	//printf("%d", &a);// & ���̸� �ּҰ� ���
	//printf("%d", *pointer);// 10 ���
	//* ���̸� �ּҰ� ����Ű�� �������� ���� ��Ÿ��
}