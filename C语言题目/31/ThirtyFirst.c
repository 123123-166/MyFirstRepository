#include<assert.h>
#include<stdio.h>
//需求: 判断一个字符串是否为另一个字符串的子串
//思路: 
//1. 定义一个函数my_strstr用于判断一个字符串是否为另一个字符串的子串
//   是则返回主字符串中该目标的地址,不是则返回NULL
//2. 函数传两个参数,都为const char* 类型
//   命名为src的是主字符串,dest是要判断的字符串
//3. 从src第一个元素判断是否等于dest的第一个,是则继续判断
//   否则src++,dest回到原来的位置

char* my_strstr(const char src[], const char dest[]);

int main(void)
{
	char arr1[] = "MySQLsss";
	char arr2[] = "ysQ";
	if (my_strstr(arr1, arr2) != NULL)
	{
		printf("%s中找到了%s\n", arr1, arr2);
	}
	else
	{
		printf("%s中没找到%s\n", arr1, arr2);
	}

	return 0;
}

char* my_strstr(const char src[], const char dest[])
{
	assert(src != NULL && dest != NULL);
	//创建一个指针用于记录判断到src的哪个元素了
	char* tmp1 = src;
	char* tmp2 = dest;
	while (*tmp1 != '\0')
	{
		src = tmp1;
		while (*dest == *src)
		{
			if (dest[1] == '\0')
				return tmp1;
			dest++;
			src++;
		}
		tmp1++;
		dest == tmp2;
	}

	return NULL;
}