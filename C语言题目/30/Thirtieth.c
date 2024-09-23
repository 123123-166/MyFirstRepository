#include<stdio.h>
#include<math.h>

//需求: 八进制转化为十进制
//思路: 
//1. 八进制按每位的权重进行转换
//2. 把每位拿出乘以权重，相加即为十进制

int main() 
{
    int sum = 0;
    int ONum;
    printf("请输入一个八进制数: ");
    scanf("%d", &ONum);
    int i = 0;
    while (ONum != 0)
    {
        sum += ONum % 10 * pow(8.0, i);
        i++;
        ONum /= 10;
    }
    printf("转换后的十进制数为: %d", sum);

    return (0);
}