// 포인터
#include <stdio.h>

//변수는 세가지의 값을 가진다 : 이름, 주소, 값

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

	int* pointer; //포인터 변수 선언
	//포인터 변수도 변수다
	//포인터 변수는 값을 받지 않고 변수의 주소값을 받음
	pointer = &a; //포인터가 a의 주소를 값으로 받는다

	//printf("%d", &a);// & 붙이면 주소값 출력
	//printf("%d", *pointer);// 10 출력
	//* 붙이면 주소가 가리키는 포인터의 값을 나타냄
}