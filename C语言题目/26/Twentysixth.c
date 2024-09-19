#include<stdio.h>
//需求:将字符串反转,如"I like Beijing" -> "gnijieB ekil I"
//分析:
//1.先输入一个字符串
//2.创建一个函数,反转字符串
//3.运用双指针,从字符串前后开始交换
//4.直到前指针大于后指针
//5.最后输出字符串
void reverseStr(char* str);

int main(void)
{
	char str[20];
	scanf("%[^\n]", str);
	reverseStr(str);
	printf("%s\n", str);

	return 0;
}

void reverseStr(char* str)
{
	char* start = str;
	while (*++str != '\0');
	char* end = str - 1;
	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}