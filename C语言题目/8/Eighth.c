#include<stdio.h>

//求100到200以内的素数
//判断n是否为素数,是则返回1,否则为0
int is_prime(int n)
{
	int i = 0;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main(void)
{
	int i = 0;
	for (i = 100; i < 201; i++)
	{
		if (is_prime(i))
		{
			printf("%d ", i);
		}
	}

	return 0;
}
