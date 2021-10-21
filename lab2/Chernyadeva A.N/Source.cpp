#include <conio.h>
#include <locale.h>
#include <stdio.h>

// ���������� �������
int prime(long N);

int main()
{
	// ������� ����
	setlocale(LC_ALL, "Rus");

	//���������� ���������
	int number, index;

	//����� ��������������� ������
	printf(" ��������� ������������ ������ �����\n       �� ����� ���� �������.       \n");
	printf("    (\"1\" ��������� ������� ������)    \n\n");

	// ����, �����������, ����������� �� ������� ������ �����
	do
	{
		printf("������� ����������� ����� n, ������� ������\nn = ");
		if (scanf_s("%d", &number) == 0) //�������� �� ���� �������
		{
			printf("!!! �� ����� �� ����� !!!");
			getchar() != '\0';
		}
		else if (number == 0) printf("!!! �� ����� ���� !!!"); //�������� �� ���� ����
		else if (number < 0) printf("!!! �� ����� ������������ ����� !!!"); //�������� �� ���� �������������� �����
		else if (number % 2 != 0) printf("!!! �� ����� �������� ����� !!!"); //�������� �� ���� ��������� �����
	} while ((number % 2 != 0) || (number <= 0));

	printf("-------------------\n");
	printf("%d = \n", number); //����� ��������� �����

	//���������� ����� �� ����� �������
	for (index = 0; index *2 < number; index++)
	{
		if (prime(index) && prime(number - index))
			printf("    %d + %d\n", index, number - index);
	}
	
}

//�������, ����������� �������� �����.
int prime(long N)
{
	long j;
	if ((N < 1) || (N % 2 == 0)) return 0;
	if (N == 1) return 1;
	for (j = 3; j * j <= N; j += 2)
		if (N % j == 0) return 0;
	return 1;
}

