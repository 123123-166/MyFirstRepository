#include<stdio.h>
#include<stdbool.h>
/*
一个机器人位于一对整数坐标（x，y）处。 
必须将其移动到具有另一组坐标的位置。 
尽管该机器人可以移动任意次，但只能进行以下两种类型的移动：
1.从位置（x，y）到位置（x + y，y）
2.从位置（x，y）到位置（x，x + y）
给定开始和目标结束坐标，
如果机器人可以根据给定的运动规则到达结束坐标，您应该返回True，
否则返回False。
其中x和y范围在[1,1000000000]
*/

bool reaching_points_i_i1(int* start, int* target);

int main(void)
{
	int arr1[] = { 1, 1 };
	int arr2[] = { 5, 2 };
	bool yesOrno = reaching_points_i_i1(arr1, arr2);
	printf("%d\n", yesOrno);

	system("pause");
	return 0;
}

/* 从前往后情况很多
   从后往前就三种
   tx = ty
   tx < ty
   tx > ty
   如果相等则只能是起点或不能到达
   如果tx < ty
   则上一次是把tx给ty
   同理tx > ty
   故我们循环条件是 tx != ty && tx >= sx && ty >= sy
*/
bool reaching_points_i_i1(int* start, int* target)
{
	while (target[0] != target[1] && target[0] >= start[0] 
		   && target[1] >= start[1])
	{
		if (target[0] == start[0] && target[1] == start[1])
			return true;
		if (target[0] > target[1])
			target[0] -= target[1];
		else
			target[1] -= target[0];
	}
	if (target[0] == target[1])
	{
		if (start[0] == start[1] && start[0] == target[0])
			return true;
	}

	return false;
}