#include<stdio.h>
//打印菱形
int main(void)
{
	int n = 0;
	//打印菱形最长边的*数(奇数)
	scanf("%d", &n);
	for (int i = 0; i <= n / 2; i++)
	{
		for (int j = n / 2; j > i; j--)
		{
			putchar(' ');
		}
		for (int j = 0; j < 2 * i + 1; j++)
		{
			putchar('*');
		}
		printf("\n");
	}
	for (int i = n / 2; i >= 0; i--)
	{
		for (int j = i; j <= n / 2; j++)
		{
			putchar(' ');
		}
		for (int j = 0; j < 2 * i - 1; j++)
		{
			putchar('*');
		}
		printf("\n");
	}
	return 0;
}