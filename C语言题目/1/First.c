#include<stdio.h>

//实现打印1,2,3,4可以组成的不同三位数的个数及每个数
int main(void)
{
	//_1
	//int i, j, k;
	//int g, s, b;
	//int num;
	//int count = 0;
	//for (i = 1;i <= 4;i++)
	//{
	//	b = i*100;
	//	for (j = 1;j <= 4;j++)
	//	{
	//		s = j*10;
	//		if (i == j) continue;
	//		for (k = 1;k <= 4;k++)
	//		{
	//			if ((j == k) || (i == k)) continue;
	//			g = k;
	//			num = b + s + g;
	//			printf("%d ", num);
	//			count++;
	//		}
	//	}
	//	putchar('\n');
	//}
	//printf("%d\n", count);

	////_2
	//int num = 0;
	//int count = 0;
	//int g, s, b;
	//for (num = 100;num < 1000;num++)
	//{
	//	g = num % 10;
	//	s = num / 10 % 10;
	//	b = num / 100;
	//	if ((g != s) && (g != b) && (s != b))
	//	{
	//		if (g <= 4 && s <= 4 && b <= 4 && g > 0 && s > 0 && b > 0)
	//		{
	//			printf("%d ", num);
	//			count++;
	//		}
	//	}
	//}
	//printf("%d\n", count);

	return 0;
}