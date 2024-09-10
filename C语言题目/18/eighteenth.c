#include<stdio.h>

//求2/1+3/2+4/3+...前n项的和
int main(void)
{
	float s = 2.0f;
	float m = 1.0f;
	float sum = 0;
	int n = 0;
	scanf("%d", &n);
	//n为求前几项的和
	for (int i = 0; i < n; i++)
	{
		sum += s / m;
		float tmp = s;
		s = s + m;
		m = tmp;
	}
	printf("%f\n", sum);

	return 0;
}