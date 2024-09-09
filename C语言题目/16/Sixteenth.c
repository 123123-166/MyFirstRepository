#include<stdio.h>
//一个猴子第一天摘下若干个桃子,吃了一半多一个
//第二天又吃了剩下的一半多一个,以后每天如此
//第10天早上看(还没吃)只剩下一个桃子了
//求猴子一共摘了多少个桃子

int main(void)
{
	//第九天吃后剩下桃子的个数
	int x = 1;
	int y = (x + 1) * 2;
	int day = 9;
	for (x = 1; day >= 1; day--)
	{
		x = y;
		y = (x + 1) * 2;
	}
	printf("%d\n", x);

	return 0;
}