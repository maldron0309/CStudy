#include <stdio.h>

int main() {

	/*�ʱ��    ���ǽ�   ������
	for (int i = 0; i < 20; i++)
	{
		printf("���� : %d\n", i);
	}*/

	// 1 ���� 19 ���� ��

	/*int sum = 0;

	for (int i = 0; i < 20; i++)
	{
		sum = sum + i;
	}
	printf(" 1 ���� 19 ������ �� : %d\n", sum);*/

	/*int sum = 0;

	for (int i = 0; i <= 10000; i++)
	{
		sum = sum + i;
	}
	printf("1 ���� 10000 ������ �� : %d\n", sum);*/

	// for ����

	//int i, sub, score;
	//double sum_score = 0;	

	//printf("�� ���� ���� ������ �Է� ���� ���ΰ�? : ");
	//scanf_s("%d", &sub);

	//printf("\n �� ������ ���� �Է� ");
	//for ( i = 1; i <= sub; i++)
	// // i �� ���� 1���� sub ���� 1 �� ����
	// // for �� ���� ������ sub �� ����ȴٴ� ��
	//{
	//	printf("���� %d : ", i);
	//	scanf_s("%d", &score); // �� ���� �Է¹ޱ�
	//	sum_score = sum_score + score; // ������� ������ ��
	//}

	//printf("��ü ������ ����� : %.2f\n", sum_score / sub);

	// break

	//int a;

	//printf("��ǻ�Ͱ� ������ ���� ���߱�");

	//for (;;) // for���� ���ǽ��� ���õ��� �ʴ´ٸ� �׻� �� �̶�� �ν��ϰԵ�
	//	// �ٽ� ���� ���ѹݺ�
	//{
	//	scanf_s("%d", &a);
	//	if (a == 3)
	//	{
	//		printf("����!");
	//		break;
	//	}
	//	else
	//	{
	//		printf("����");
	//	}
	//}

	//for (;;)
	//{
	//	break; // break���� ������ ���� for�� ������ Ż�� ��Ű�Ƿ�
	//	// a �� ��� ���� �ʰ� �����
	//	prirnf("a");
	//}

	//for (;;)
	//{
	//	prirnf("a");
	//	break; // a�� ��µǰ� for ���� �������� �����
	//}

	// ���� for���� ���� ������ ���̰� �ִ�.

	//for (;;)
	//{
	//	// ����
	//	if (/*���� ���*/)
	//	{
	//		if (/*���� �ٽ� ����*/)
	//			break;
	//	}
	//}
	// �ٽ� ����

	// continue ��
	// continue ���� break���� ��������� �ٸ���
	// continue ���� break�� �޸� for���� ���� ������ �ʰ�
	// �׳� �н��Ѵ�

	// 5 �� ����� ������ ���� ���

	//int i;

	//for ( i = 0; i < 100; i++)
	//{
	//	if (i % 5 == 0)
	//	// i �� 5�� ���� ������ 
	//	// i % 5 �� 0�� �� == 0, continue�� ������
	//	{
	//		continue;
	//	}
	//	printf("%d ", i);
		// 5�� ����� ������ 0 �̻� 100�̸��� ��� ���� ��µ�
		// continue�� break �� ó�� �Ʒ� ��� ������ �����Ѵٴ� ������
		// ���� ������, break���� ������ ���������µ� �ݸ�
		// continue �� �ٽ� ���� ���˺η� �����ϰ� �ȴ�.

	// ������
	//int i, j;

	//for (i = 1; i < 10; i++)
	//{
	//	for (j = 0; j < 10; j++)
	//	{
	//		printf("%d x %d = %d\n", i, j, i * j);
	//	}
	//}

	/*int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < i; j++)
		{
			printf("%d ", j);
		}
	}*/
	// i�� 1�̸�, j�� ��µ��� �ʰ�, i�� 2�� �Ǹ� j�� 1���� 8���� ��µȴ�.

	// while ��

	//int i = 1, sum = 0;

	//// ���ǽ�
	//while (i <= 100)
	//{
	//	sum += i;
	//	i++;
	//}
	//// i �� ���� 100 ���� �� �� �˻��� ������ (i <= 100), sum �� i�� ���ϰ�
	//// (sum += i), i �� ���� ������ ��(i++), �ٽ� ó������ ���ư��� ��
	//// while ���� Ư¡�� ���� ���� ���ǽ��� �˻��Ѵٴ� ��
	//// ���� i < 1 �� ���ǽ��̶�� while �� ������ ������ ������� �ʰ� ����

	//// ���ǽĿ� i <= 100�� ���ٸ� i�� 100 ���� �� �� �� ���ǽ��� �����ϹǷ�
	//// i�� 100 ���� �� �� ���� while ���� ���ư��� �ȴ�.

	//printf("1 ���� 100 ������ �� : %d\n", sum);


	// do-while ��

	/*int i = 1, sum = 0;

	do {
		sum += i;
		i++;
	} while (i < 1);
	{
		printf("sum : %d\n", sum);
	}*/

    // do-while���� ���� ������ ���� �� �ڿ� ���ǽ��� �˻��Ѵ�
    // ó�� ���� ���ǽ��� ���� �ƴϴ��� ���� ���� ������ ���� ���ǽ���
    // �˻��ϱ� ������ �ּ��� �� ���� ����ȴ�.

   
    // N ���� �ﰢ�� ���
	/*int N, i, j, k;

	printf("������ N�� �Է��ϼ���: ");
	scanf("%d", &N);

	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N - i; j++) {
			printf(" ");
		}
		for (k = 1; k <= 2 * i - 1; k++) {
			printf("*");
		}
		printf("\n");
	}*/


	return 0;
}