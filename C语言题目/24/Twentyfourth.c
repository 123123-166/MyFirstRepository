#include<stdio.h>
//实现判断用户输入英文星期几的首字符是星期几,如果判断不出则继续让用户输入
//monday tuesday wednesday thursday friday saturday sunday
int main(void)
{
	printf("请输入一个字符:");
	char ch = getchar();
	getchar();
	switch (ch)
	{
	case 'm':
		printf("我判断是Monday.\n");
		break;
	case 't':
		printf("我判断不出来,再输入一个字符:\n");
		ch = getchar();
		if (ch == 'u')
			printf("我判断是Tuesday.\n");
		else
			printf("我判断是Thursday.\n");
		break;
	case 'w':
		printf("我判断是Wednesday.\n");
		break;
	case 'f':
		printf("我判断是Friday.\n");
		break;
	case 's':
		printf("我判断不出来,再输入一个字符:\n");
		ch = getchar();
		if (ch == 'a')
			printf("我判断是Saturday.\n");
		else
			printf("我判断是Sunday.\n");
		break;
		return 0;
	}
}
