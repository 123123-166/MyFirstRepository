#include<stdio.h>
#include<string.h>
//需求:删除字符串中的指定字符
//如果字符串中有多个该字符则全删除并返回非0,如果没有则返回0
//思路:
//1.先输入一个字符串使用scanf("%[^\n]",)
//2.输入要删除的字符
//3.编写一个函数删除字符,传入两个参数,一个为字符指针,另一个为指定的字符
//4.在函数内遍历该指针所指向的字符串,删除指定字符,并创建count变量统计删除了多少个该字符
//5.最后返回count
//6.在主函数内打印删除后的字符串(若未删除则打印未删除)
int main(void)
{
	char str[20];
	scanf("%[^\n]", str);
	getchar();
	char ch = getchar();
	int num = deleteChar(str, ch);
	if (num != 0)
	{
		printf("删除了%d个%c字符\n", num, ch);
		printf("删除后的字符串:%s", str);
	}
	else
	{
		printf("未删除,因为该字符串内没有该字符.\n");
	}
	return 0;
}

int deleteChar(char* str, char ch)
{
	int count = 0;
	while (*str != '\0')
	{
		if (*str == ch)
		{
			char* tmp = str;
			//删除该字符
			while (*str != '\0')
			{
				*str = *(str + 1);
				str++;
			}
			count++;
			str = tmp;
		}
		str++;
	}

	return count;
}
