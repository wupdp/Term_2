#include <stdio.h>
#include <stdlib.h>
int main()
{
	int massive[100];
	int num, proiz,sum;
	proiz = 1;
	sum = 0;
	printf("enter the number of elements\n");				//���� ���������� ���������
	scanf_s("%d", &num);
	if (num < 1 || num>100)
	{
		printf("error");
		return 0;
	}						
	printf("enter 1 to enter the array elements yourself\n");  //����� ������������
	printf("enter 2 to randomly enter array elements\n");
	int x;
	scanf_s("%d", &x);
	switch (x)
	{
	case 1:
		for (int i = 0; i < num; i++)							//���� �������������
		{
			printf("enter %d number of massive		", i + 1);
			scanf_s("%4d", &massive[i]);
		}
		break;
	case 2:															//��������� ����
		for (int i = 0; i < num; i++)
		{
			massive[i] = rand() % 100;
			printf("%d number of massive		%d\n", i + 1, massive[i]);
		}
		break;
	default:															//����������� ����
		printf("incorrect enter\n");
		return 0;
	}		
	for (int i = 0; i < num;i=i+2)									//����� ������������
	{
		proiz = proiz * massive[i];
	}
	printf("composition is %d\n", proiz);
	int istart, iend,flag;
	flag = 0;
	for (int i = 0; i < num; i++)									//�������� �� ���-�� �����
	{
		if (massive[i] == 0)
			flag++;
	}
	if (flag < 2)
		return 0;
	for (int i = 0; i < num;i++)									//����� �����
	{
		if (massive[i] == 0)
		{
			istart = i;
			break;
		}	
	}
	for (int i = num-1; i >=0;i--)
	{ 
		if (massive[i] == 0)
		{
			iend = i;
			break;
		}
	}
	for (int i = istart; i <= iend; i++)
	{
		sum = sum + massive[i];
	}
	printf("sum=%d", sum);
	return 0;
}
