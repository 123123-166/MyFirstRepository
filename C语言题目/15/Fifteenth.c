#include<stdio.h>
//一球在100米高度自由落下,每次碰到地面反弹回原高度的一半
//求第n次落下时,经过多少米,第n次反弹多高
int main(void)
{
	//定义最初高度
	int n = 0;
	scanf("%d", &n);
	float hign = 100.0;
	float tmp = hign / 2.0;
	float sum = 0;
	int i = 0;
	//进行10次循环
	for (i = 0; i < n; i++)
	{
		sum += hign;
		hign = tmp;
		tmp = hign / 2.0;
	}
	printf("第%d次落地时,共经过%f米\n", n, sum);
	printf("在第%d次反弹%f米\n", n, hign);
	
	return 0;
}