#include<stdio.h>
//一个整数加上100是一个完全平方数，再加上168又是一个完全平方数，求该数是多少
int main(void)
{
	int i, j, m, n, x;
	for (i = 2;i < 168 / 2 + 1;i += 2)
	{
		if (168 % i == 0)
		{
			j = 168 / i;
			if (j % 2 == 0 && j < i)
			{
				m = (j - i) / 2;
				x = m * m - 100;
				printf("%d ", x);
			}
		}
		
	}
	putchar('\n');

	return 0;
}
