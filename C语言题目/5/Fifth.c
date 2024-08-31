#include<stdio.h>

//输入三个整数,把它们由大到小排列
int main(void)
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int max,mid,min;
    max = x>y?x:y;
    min = x<y?x:y;
    if(max<z) //max已经确定
    {
        mid = x>y?x:y;
        max = z;
    }
    else      //min已经确定
    {
        mid = max<z?max:z;
        max = max>z?max:z;
    }
    printf("max = %d,mid = %d,min = %d\n",max,mid,min);

    return 0;
}