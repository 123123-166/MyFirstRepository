#include<stdio.h>
//有5个人坐在一起,第5个人比第4个人大2岁,第4个人比3个人大2岁,依次类推
//第1个人说他10岁
//用递归求第5个人的年龄

//peo是第多少个人,cmp是比较方法(第 n 个人比第 n - 1 个人大多少岁,(负号代表小))
//age代表第1个人的年龄
unsigned int GetAge_recursion(unsigned int peo, int cmp, unsigned int age)
{
	if (peo == 1)
		return age;
	return GetAge_recursion(peo - 1, cmp, age) + cmp;
}
int main(void)
{
	unsigned int peo, age;
	int cmp;
	//依次输入peo, cmp, age
	scanf("%u %d %u", &peo, &cmp, &age);
	unsigned int fifthPeoAge = GetAge_recursion(peo, cmp, age);
	printf("%u\n", fifthPeoAge);
	return 0;
}