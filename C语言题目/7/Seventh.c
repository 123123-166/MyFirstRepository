
//循环实现斐波那契数列
int fibonaqi_loop(int n)
{
	int i, ret, j, k;
	ret = j = k = 1;
	for (i = 1; i < n - 1; i++)
	{
		j = k;
		k = ret;
		ret = j + k;
	}
	return ret;
}

int main(void)
{
	int n = 0;
	printf("请输入要计算第几项:");
	scanf("%d", &n);
	int ret = fibonaqi_loop(n);
	printf("f(%d) = %d\n", n, ret);

	return 0;
}