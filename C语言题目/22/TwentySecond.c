#include<stdio.h>
//求一个正整数是几位数,且逆序打印他
int main()
{
	//输入一个正整数
	int n;
	scanf("%d", &n);
	int s = 0;
	int i = 0;
	while (n != 0)
	{
		int m = n % 10;
		s = s * 10 + m;
		n /= 10;
		i++;
	}
	printf("%d\n%d", i, s);

	return 0;
}