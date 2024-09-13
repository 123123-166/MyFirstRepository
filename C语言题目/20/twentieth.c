#include<stdio.h>
#include<string.h>

//利用递归法,将输入的字符串,按相反顺序打印
void print_reverse(char arr[],int len)
{
	if (len == 0)
		return;
	printf("%c", arr[len - 1]);
	print_reverse(arr, len - 1);
}
int main(void)
{
	char arr[20];
	scanf("%[^\n]", arr);
	print_reverse(arr, strlen(arr));
	return 0;
}