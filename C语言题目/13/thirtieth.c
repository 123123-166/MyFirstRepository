#include<stdio.h>
#include<math.h>

//输入一个数n输出S = n + nn + nnn + nnnn + nnnnn
int main(void)
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int Sum = 0;
	int S = 0;
	for (i = 0; i < 5; i++)
	{
		S += n * pow(10, i);
		Sum += S;
	}
	printf("%d\n", Sum);
	return 0;
}