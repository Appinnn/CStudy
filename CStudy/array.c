#include <stdio.h>
#include <string.h>

#define size 3;

void main()
{
	// int[] arr = new int[5]; - �ڹ� �迭
	// final int size = 10;


	int arr[5] = { 1,2,3,4,5 };

	int arr2[] = {11, 22, 33, 44};

	// constexpr int a = 10; c++ ����11 �̻�
	// const int size = 3;
	// 
	// int arr[size]; // �迭�� ũ��� �ݵ�� ������ �ƴ� �����
	// int arr3[size];

	// int number[10] = { 0 };

	int number[5];
	memset(number, 0, 5 * sizeof(int) );
	

	
	/*number[0] = 10;
	number[1] = 20;
	number[2] = 30;
	number[3] = 40;
	number[4] = 50;

	printf("%d \n", number[6]);

	for (int i = 0; i < sizeof(number) / sizeof(int); i++)
	{
		printf("%d \n", number[i]);
	}*/

	int apple[10] = { 45, 34, 67, 23, 12, 69, 51, 89, 99, 28 };
	// ��� ���ڰ� 10�ڽ��� �ִ�.
	// �� �ڽ��ȿ� ����ִ� ��� �����̴�.
	// �� �߿��� 50���̻� ����ڽ��� ���° ���° �ڽ����� ���

	for (int i = 0; i < sizeof(apple) / sizeof(int); i++)
	{
		if (apple[i] >= 50)
		{
			printf("%d \n", i);
		}
	}
}