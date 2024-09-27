#include<stdio.h>
#define NotFound -1
/* 实现二分查找 */
int binarySearch(const int arr[], int n, int X);

int main(void)
{
	int arr[] = { 1, 5, 5, 6, 7 };
	int ret = binarySearch(arr, 5, 5);
	printf("%d\n", ret);
	getchar();
	return 0;
}

/* 在arr中寻找X,如果找到了返回下标,否则返回NotFound */
//时间复杂度为O(logN)
int binarySearch(const int arr[], int n, int X)
{
	int mid, low, hign;
	low = 0, hign = n - 1;
	while (low <= hign)
	{
		mid = low + hign;
		if (X > arr[mid])
			low = mid + 1;
		else if (X < arr[mid])
			hign = mid - 1;
		else
			return mid;
	}
	
	return NotFound;
}
