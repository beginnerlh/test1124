#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
void jiaohuan()
{
	printf(" 给定两个整形变量的值，将两个值的内容进行交换。\n");
	int a = 0;
	int b = 0;
	int temp = 0;
	printf("请输入两个数\n");
	scanf("%d %d", &a, &b);
	temp = a;
	a = b;
	b = temp;
	printf("%d %d\n", a, b);
}
void jiaohuan2()
{
	printf("不允许创建临时变量，交换两个数的内容（附加题）\n");
	int a = 0;
	int b = 0;
	printf("请输入两个数\n");
	scanf("%d %d", &a, &b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("%d %d\n", a, b);
}
void zuida()
{
	printf("求10 个整数中最大值。\n");
	int a = 0;
	int arr[10];
	printf("请输入十个数\n");
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
	printf("最大值为%d\n", a);
}
void bijiao()
{
	printf("将三个数按从大到小输出。\n");
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	printf("请输入三个数\n");
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
	printf("求两个数的最大公约数。\n");
	int num1 = 0;
	int num2 = 0;
	int a = 0;
	printf("请输入两个数\n");
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
	jiaohuan();//1. 给定两个整形变量的值，将两个值的内容进行交换。
	printf("\n");
	jiaohuan2();//2. 不允许创建临时变量，交换两个数的内容（附加题）
	printf("\n");
	zuida();//3.求10 个整数中最大值。
	printf("\n");
	bijiao();//4.将三个数按从大到小输出。
	printf("\n");
	gongyue();//5.求两个数的最大公约数。
	system("pause");
	return 0;
}