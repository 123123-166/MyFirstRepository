#include<stdio.h>
//统计输入的字符串有多少个字母,数字,空格和其他符号
int main(void)
{
	char str[100];
	scanf("%[^\n]", str);
	char* p = str;
	int c1, c2, c3, c4;
	c1 = c2 = c3 = c4 = 0;
	while (*p != 0)
	{
		if (*p >= 'a' && *p <= 'z')
			c1++;
		else if (*p >= '1' && *p <= '9')
			c2++;
		else if (*p == ' ')
			c3++;
		else
			c4++;
		p++;
	}
	printf(" 字母:%d\n 数字:%d\n 空格:%d\n 其他:%d\n ", c1, c2, c3, c4);

	return 0;
}