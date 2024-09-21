#include<stdio.h>
#include<stdlib.h>
//需求: 向有序数组插入数据并保持不变
//思路: 
//1. 先输入一个有序数组
//2. 比较第一个元素和最后一个元素判断该数组是升序还是降序
//3. 插入数据
//4. 输出数组各元素
int main(void)
{
	int size;
	printf("请输入你数组中元素的个数: ");
	scanf("%d", &size);
	int* pa = (int*)malloc((size + 1) * sizeof(int));
	if (pa == NULL)
	{
		perror("malloc: ");
		exit(EXIT_FAILURE);
	}
	printf("请输入各元素的值: ");
	for (int i = 0; i < size; i++)
	{
		scanf("%d", pa + i);
	}
	//插入元素
	int value;
	printf("请输入你要插入元素的值: ");
	scanf("%d", &value);
	/* 判断数组是升序还是降序 */
	int f = 1; //假设数组是升序
	if (size == 1)
		pa[size] = value;
	else
	{
		if (pa[0] > pa[1])
			f = 0;
		if (f == 1)
		{
			for (int i = size - 1; i >= 0; i--)
			{
				if (value >= pa[i])
				{
					//把value插到i + 1的位置
					for (int j = size - 1; j > i; j--)
					{
						pa[j + 1] = pa[j];
					}
					pa[i + 1] = value;
					goto end;
				}
			}
		}
		else
		{
			for (int i = size - 1; i >= 0; i--)
			{
				if (value < pa[i])
				{
					//把value插到i + 1的位置
					for (int j = size - 1; j > i; j--)
					{
						pa[j + 1] = pa[j];
					}
					pa[i + 1] = value;
					goto end;
				}
			}
		}
	}

end:


	for (int i = 0; i < size + 1; i++)
	{
		printf("%d ", pa[i]);
	}

	return 0;
}