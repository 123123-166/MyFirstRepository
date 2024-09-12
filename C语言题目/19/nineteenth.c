#include<stdio.h>

//计算1! + 2! + 3! +...+n!
//计算阶乘
int fact(int n)
{
	int sum = 1;
	for (int i = 1; i <= n; i++)
	{
		sum *= i;
	}
	return sum;
}
int main(void)
{
	int n = 0;
	scanf("%d", &n);
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += fact(i);
	}
	printf("%d\n", sum);
	return 0;
}