#include <stdio.h>

int main()
{
	//// �迭 ����
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	//printf("Array 5�� ° ���� : %d\n");

	/*int arr[10] = { 2,10,30,21,34,23,53,21,9,1 };
	
	for (int i = 0; i < arr; i++)
	{
		printf("�迭�� %d ��° ���� : %d\n", i + 1, arr[i]);
	}*/


	// ��� ���ϱ�

	//int arr[5]; // ������ �����ϴ� �迭
	//int i, avg = 0;

	//for ( i = 0; i < 5; i++) // �л����� ������ �Է¹ޱ�
	//{
	//	printf("%d �� ° �л��� ������ ? : ", i + 1);
	//	scanf_s("%d", &arr[i]);
	//}

	//for ( i = 0; i < 5; i++) // ��ü �л� ������ �� ���ϱ�
	//{
	//	avg = avg + arr[i];
	//}
	//// ����̹Ƿ� 5 �� ������ �ֱ�

	//printf("��ü �л��� ����� : %d\n", avg / 5);


	// ���� �հ� ���հ�

	int arr[10];
	int i, avg = 0;

	for ( i = 0; i < 10; i++)
	{
		printf("%d ��° �л��� ������? : ",i + 1);
		scanf_s("%d", arr[i]);
	}

	for ( i = 0; i < 10; i++)
	{
		avg = avg + arr[i];
	}
	avg = avg / 10;
	printf("��ü �л��� �����? : %d\n", avg);
	for ( i = 0; i < 10; i++)
	{
		printf("�л� %d", i + 1);
		if (arr[i] >= avg)
		{

		}
	}

	return 0;
}