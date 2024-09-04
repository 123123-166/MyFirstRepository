//求最大公约数和最小公倍数(通过欧几里得算法实现)
int main(void)
{
	int m, n;
	printf("请输入两个整数:");
	scanf("%d %d", &m, &n);
	if (m < n)
	{
		int tmp = m;
		m = n;
		n = tmp;
	}
	int i = m % n;
	int j = n;
	//求出m和n的最大公约数
	while (i != 0)
	{
		int tmp = i;
		i = j % i;
		j = tmp;
	}
	//求m和n的最小公倍数
	int k = m * n / j;
	printf("%d 和 %d 的最大公约数和最小公倍数分别是: %d %d\n", m, n, j, k);

	return 0;
}