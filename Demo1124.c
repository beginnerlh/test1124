#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
void jiaohuan()
{
	printf(" �����������α�����ֵ��������ֵ�����ݽ��н�����\n");
	int a = 0;
	int b = 0;
	int temp = 0;
	printf("������������\n");
	scanf("%d %d", &a, &b);
	temp = a;
	a = b;
	b = temp;
	printf("%d %d\n", a, b);
}
void jiaohuan2()
{
	printf("����������ʱ���������������������ݣ������⣩\n");
	int a = 0;
	int b = 0;
	printf("������������\n");
	scanf("%d %d", &a, &b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("%d %d\n", a, b);
}
void zuida()
{
	printf("��10 �����������ֵ��\n");
	int a = 0;
	int arr[10];
	printf("������ʮ����\n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 9; i++)
	{
		if (arr[i]>arr[i + 1])
		{
			a = arr[i];
		}
		else
		{
			a = arr[i+1];
		}
	}
	printf("���ֵΪ%d\n", a);
}
void bijiao()
{
	printf("�����������Ӵ�С�����\n");
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	printf("������������\n");
	scanf("%d %d %d", &num1, &num2, &num3);
	if (num1>num2)
	{
		if (num2>num3)
		{
			printf("%d>%d>%d",num1,num2,num3);
		}
		else
		{
			if (num1>num3)
			{
				printf("%d>%d>%d", num1,num3,num2);
			}
			else
			{
				printf("%d>%d>%d", num3,num1,num2);
			}
		}
	}
	else
	{
		if (num1>num3)
		{
			printf("%d>%d>%d", num2,num1,num3);
		}
		else
		{
			if (num2>num3)
			{
				printf("%d>%d>%d", num2,num3,num1);
			}
			else
			{
				printf("%d>%d>%d", num3,num2,num1);
			}
		}
	}
}
void gongyue()
{
	printf("�������������Լ����\n");
	int num1 = 0;
	int num2 = 0;
	int a = 0;
	printf("������������\n");
	scanf("%d %d", &num1, &num2);
	if (num1 > num2)
	{
		for ( int i = 1; i <= num2; i++)
		{
			if (0 == num2%i && 0 == num1%i)
			{
				a = i;
			}
		}
		printf("%d", a);
	}
	else
	{
		for (int i = 1; i <= num1; i++)
		{
			if (0 == num1 % i && 0 == num2%i)
			{
				a = i;
			}
		}
		printf("%d", a);
	}
}
int main()
{
	jiaohuan();//1. �����������α�����ֵ��������ֵ�����ݽ��н�����
	printf("\n");
	jiaohuan2();//2. ����������ʱ���������������������ݣ������⣩
	printf("\n");
	zuida();//3.��10 �����������ֵ��
	printf("\n");
	bijiao();//4.�����������Ӵ�С�����
	printf("\n");
	gongyue();//5.�������������Լ����
	system("pause");
	return 0;
}