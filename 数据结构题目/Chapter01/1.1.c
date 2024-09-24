/* 
* 查找含字母的二维数组中的单词位置
*/

//word_table表示该二维数组
char word_table[][4] = { "this", "wats", "oahg", "fgdt" };
//word代表单词
char* word[] = { "this", "that", "fat", "two" };
//local代表方位,从东开始
int local[8][2] = { {0, 1}, {1, 1}, {1, 0}, {1, -1},
					{0, -1}, {-1, -1}, {-1, 0}, {-1, 1} };

int main(void)
{
	int i, j;
	void wordSearch(char* word, int i, int j);
	//遍历该二维数组
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			//遍历word的首字母
			for (int n = 0; n < 4; n++)
			{
				if(*word[n] == word_table[i][j])
					wordSearch(word[n], i, j);
			}
		}
	}
	return 0;
}

void wordSearch(char* word, int i , int j)
{
		int di;
		int search(char* word, int i, int j, int di);
		for (di = 0; di < 8; di++)
		{
			//如果匹配则返回方位
			if (search(word, i, j, di) == 1)
			{
				switch (di)
				{
				case 0:
					printf("从[%2d, %2d]到东方向找到单词: %s\n", i, j, word);
					break;
				case 1:
					printf("从[%2d, %2d]到东南方向找到单词: %s\n", i, j, word);
					break;
				case 2:
					printf("从[%2d, %2d]到南方向找到单词: %s\n", i, j, word);
					break;
				case 3:
					printf("从[%2d, %2d]到西南方向找到单词: %s\n", i, j, word);
					break;
				case 4:
					printf("从[%2d, %2d]到西方向找到单词: %s\n", i, j, word);
					break;
				case 5:
					printf("从[%2d, %2d]到西北方向找到单词: %s\n", i, j, word);
					break;
				case 6:
					printf("从[%2d, %2d]到北方向找到单词: %s\n", i, j, word);
					break;
				case 7:
					printf("从[%2d, %2d]到东北方向找到单词: %s\n", i, j, word);
					break;
				}
			}
		}
}

int search(char* word, int i, int j, int di)
{
	//i, j加上方位
	for (i += local[di][0], j += local[di][1];
		(i >= 0 && i < 4) && (j >= 0 && j < 4);
		i += local[di][0], j += local[di][1])
	{
		if (word_table[i][j] == *++word)
		{
			if (word[1] == '\0')
				return 1;
			continue;
		}
		else
			break;
	}

	return 0;
}