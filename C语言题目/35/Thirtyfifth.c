#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
    查找一串ip中出现最多的ip并输出
*/
char* highest_frequency(char** ip_lines, int l);

typedef struct ipNode
{
	char* ip;
	int num;
}ipNode;

int main(void)
{
	char* p[15] = { "177.7.173.87", "33.7.42.50", "63.27.77.114", "120.116.28.90", "136.90.108.15", "33.7.42.50", "63.27.77.114", "120.116.28.90", "136.90.108.15", "63.27.77.114", "120.116.28.90", "136.90.108.15", "120.116.28.90", "136.90.108.15", "136.90.108.15" };
	char* po = highest_frequency(p, 15);
	printf("%s\n", po);
	system("pause");
	
	return 0;
}

char* highest_frequency(char** ip_lines, int l) 
{
	// Write your code here
	int len = strlen(ip_lines);
	ipNode* IP = (ipNode*)malloc(sizeof(ipNode) * l);
	IP[0].ip = *ip_lines;
	ip_lines++;
	IP[0].num = 1;
	int j = 0;
	while (*ip_lines != '\0')
	{
		for (int k = 0; k <= j; k++)
		{
			if (IP[k].ip == *ip_lines)
			{
				IP[k].num++;
				ip_lines++;
				break;
			}
			if (k == j)
			{
				j++;
				IP[j].ip = *ip_lines;
				ip_lines++;
				IP[j].num = 1;
				break;
			}
		}
	}
	int maxnum = IP[0].num;
	char* max = IP[0].ip;
	for (int i = 1; i <= j; i++)
	{
		if (maxnum < IP[i].num)
		{
			maxnum = IP[i].num;
			max = IP[i].ip;
		}
	}

	return max;
}