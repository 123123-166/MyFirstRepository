#include<stdio.h>
//求3*3矩阵对角线元素和
int main(void)
{
	int sum = 0;
	int a[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			a[i][j] = i;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == j || i + j == 2)//2是数组列宽-1
			{
				sum += a[i][j];
			}
		}
	}

	printf("%d\n", sum);
	
	return 0;
}