/* 实现求最大子序列和 */

int MaxSubsequenceSum_1(const int arr[], int N);
int MaxSubsequenceSum_2(const int arr[], int N);
static int MaxSubSum(const int arr[], int Left, int Right);
int TheBestOfMax(int arr[], int N);

int main(void)
{
	double start = clock(); 
	int arr[] = { -1, 2, 4, -5, 6, 0, 7 };
	int ret = TheBestOfMax(arr, sizeof(arr) / sizeof(arr[0]));
	double end = clock();
	printf("%d %.10lf\n", ret, end - start);
	getchar();
	return 0;
}

//时间复杂度为O(N^3)
int MaxSubsequenceSum_1(const int arr[], int N)
{
	int ThisSum, MaxSum, i, j, k;

	MaxSum = 0;
	for (i = 0; i < N; i++)
	{
		for (j = i; j < N; j++)
		{
			ThisSum = 0;
			for (k = i; k <= j; k++)
				ThisSum += arr[k];

			if (ThisSum > MaxSum)
				MaxSum = ThisSum;
		}
	}
	return MaxSum;
}

//该函数时间复杂度为O(N^2)
int MaxSubsequenceSum_2(const int arr[], int N)
{
	int ThisSum, MaxSum, i, j;

	MaxSum = 0;
	for (i = 0; i < N; i++)
	{
		ThisSum = 0;
		for (j = i; j < N; j++)
		{
			ThisSum += arr[j];

			if (ThisSum > MaxSum)
				MaxSum = ThisSum;
		}
	}
	return MaxSum;
}

//该函数时间复杂度为O(NlogN)
static int MaxSubSum(const int arr[], int Left, int Right)
{
	int MaxLeftSum, MaxRightSum;
	int MaxLeftBorderSum, MaxRightBorderSum, MaxLRSum;
	int LeftBorderSum, RightBorderSum;
	int Center, i;

	if (Left == Right)
	{
		if (arr[Left] > 0)
			return arr[Left];
		else
			return 0;
	}
	//当arr元素是偶数个时, Center偏向左
	Center = (Left + Right) / 2;
	MaxLeftSum = MaxSubSum(arr, Left, Center);
	MaxRightSum = MaxSubSum(arr, Center + 1, Right);

	//计算跨过一半的最大子序列和
	MaxLeftBorderSum = LeftBorderSum = 0;
	for (i = Center; i >= Left; i--)
	{
		LeftBorderSum += arr[i];
		if (LeftBorderSum > MaxLeftBorderSum)
			MaxLeftBorderSum = LeftBorderSum;
	}

	MaxRightBorderSum = RightBorderSum = 0;
	for (i = Center + 1; i <= Right; i++)
	{
		RightBorderSum += arr[i];
		if (RightBorderSum > MaxRightBorderSum)
			MaxRightBorderSum = RightBorderSum;
	}
	MaxLRSum = MaxRightBorderSum + MaxLeftBorderSum;

	//返回三者中的最大者
	return (MaxLRSum > MaxLeftSum ? MaxLRSum : MaxLeftSum) > MaxRightSum ?
		   (MaxLRSum > MaxLeftSum ? MaxLRSum : MaxLeftSum) : MaxRightSum;
}

//时间复杂度为O(N)
int TheBestOfMax(int arr[], int N)
{
	int ThisMax, MaxSum;
	ThisMax = MaxSum = 0;
	int i;

	for (i = 0; i < N; i++)
	{
		ThisMax += arr[i];

		if (ThisMax > MaxSum)
			MaxSum = ThisMax;
		else if (ThisMax < 0)
			ThisMax = 0;
	}

	return MaxSum;
}
