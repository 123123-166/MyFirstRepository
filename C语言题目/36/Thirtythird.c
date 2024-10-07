#include<stdio.h>
/*
	一个数组是非递减数组,判断一个数是否为它的主元素
	主元素: 在数组中的数量大于(数组元素个数 / 2)[11 / 2 = 5] 
*/

//n是arr的元素个数, target是目标元素
//target是arr的主元素返回1, 否则返回0
int isMainElement(int arr[], int n, int target)
{
	int i, j;
	i = 0;
	j = n - 1;
	while (i <= j)
	{
		int mid = (i + j) / 2;
		if (arr[mid] >= target)
			j = mid - 1;
		else
			i = mid + 1;
	}
	int left = i;
	i = 0;
	j = n - 1;
	while (i <= j)
	{
		int mid = (i + j) / 2;
		if (arr[mid] <= target)
			i = mid + 1;
		else
			j = mid - 1;
	}
	int right = j;
	return (right - left + 1) > n / 2;
}

int main(void)
{
	int arr[] = { 1, 2, 5, 5, 5 , 8};
	printf("%d", isMainElement(arr, 6, 5));
	return 0;
}