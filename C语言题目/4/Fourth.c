#include<stdio.h>
//输入某年某月某日求出这天是这一年的第几天
int is_runnian(int year)//判断是否为闰年
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 1;
	return 0;
}
int main(void)
{
	int year, month, day;
	printf("请输入日期(年 月 日):");
	scanf("%d %d %d", &year, &month, &day);
	int m[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int i = 0;
	int days = 0;
	for (i = 1;i < month;i++)
	{
		if (is_runnian(year) && i == 2)
			m[2]++;
		days += m[i];
	}
	days += day;
	printf("%d.%d是%d年的第%d天\n", month, day, year, days);

	return 0;
}