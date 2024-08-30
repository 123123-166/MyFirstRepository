#include<stdio.h>
#define MAX 5

//实现计算每年利润产生的分红:
//低于10万元的按10%算 高于10万元低于20万元的按7.5%算
//高于20万元低于40万元的按5%算 高于40万元低于60万元的按3%算
//高于60万元低于100万元的按1.5%算 高于100万元的按1%算
int main(void)
{
	int i = 0;
	int m = 0;
	float JJ = 0;
	scanf("%d", &m);
	int arr[MAX] = { 10 * 0.1,10 * 0.075,20 * 0.05,20 * 0.03,40 * 0.015 };
	if (m > 100)
	{
		JJ += (m - 100) * 0.01;
		for (i = 0;i < MAX;i++) JJ += arr[i];
	}
	else if (m > 60 && m <= 100)
	{
		JJ += (m - 60) * 0.015;
		for (i = 0;i < MAX - 1;i++) JJ += arr[i];
	}
	else if (m > 40 && m <= 60)
	{
		JJ += (m - 40) * 0.03;
		for (i = 0;i < MAX - 2;i++) JJ += arr[i];
	}
	else if (m > 20 && m <= 40)
	{
		JJ += (m - 20) * 0.05;
		for (i = 0;i < MAX - 3;i++) JJ += arr[i];
	}
	else if (m > 10 && m <= 20)
	{
		JJ += (m - 10) * 0.075;
		for (i = 0;i < MAX - 4;i++) JJ += arr[i];
	}
	else if (m <= 10) JJ += m * 0.1;
	printf("%f万元\n", JJ);
	
	return 0;
}