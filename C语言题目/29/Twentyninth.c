#include<stdio.h>
#include<assert.h>
//需求: 将一个数组逆序输出(要求数组为整型数组[即除浮点型的类型])
//思路: 
//1. 定义一个函数, 函数声明为 void reverse(void* arr,int elements, int size);
//2. 其中elements为数组元素个数, size为单个元素的字节大小
//3. 使用char*接收arr
//4. 使用双指针双循环,外层循环终止条件为start >= end,内层循环为小于size

void reverse(void* arr, int elements, int size);
int main()
{
	int arr[] = { 1, 2, 3 };
	reverse(arr, 3, sizeof(int));
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

void reverse(void* arr, int elements, int size)
{
	assert(arr != NULL);
	char* pa = (char*)arr;
	int i;
	char* start = pa;
	char* end = pa + (elements - 1) * size;
	while (start < end)
	{
		for (i = 0; i < size; i++)
		{
			char tmp = *start;
			*start = *end;
			*end = tmp;
			start++;
			end--;
		}
	}
	
}