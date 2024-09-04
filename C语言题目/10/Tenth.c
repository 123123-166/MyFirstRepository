#include<stdio.h>
//使用条件运算符的嵌套实现:学习成绩 >= 90 打印A
//60 =< 学习成绩 < 90 打印B    学习成绩低于60 打印C
int main(void)
{
	int point = 0;
	scanf("%d", &point);
	int ret = point >= 60 ? (point < 90 ? 'B' : 'A') : 'C';
	printf("%c\n", ret);
	
	return 0;
}