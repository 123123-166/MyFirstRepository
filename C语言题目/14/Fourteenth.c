#include<stdio.h>
//完数:6可以被1 2 3 整除
//    28可以被1 2 4 7 14整除(除去本身)
//求1000以内的完数

//求出能整除n的数并相加(除去n本身)
int Get_sum(int n)
{
	int sum = 0;
	int i = 1;
	for (i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	return sum;
}

int main(void)
{
	//将某个数分解质因数
	int i = 2;
	for (i = 2; i <= 1000; i++)
	{
		if (Get_sum(i) == i)
			printf("%d ", i);
	}
	
	return 0;
}