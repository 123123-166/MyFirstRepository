#include<stdio.h>
//实现将一个正整数质因数分解并打印其质因数
void fac_num(int n)
{
	int i = 2;
	for (i = 2; i <= n; i++)
	{
		while(n % i == 0)
		{
			printf("%d ", i);
			n /= i;
		}
	}
}

int main(void)
{
	int n = 0;
	scanf("%d", &n);
	fac_num(n);

	return 0;
}