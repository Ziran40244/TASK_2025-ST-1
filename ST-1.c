#include <stdio.h>
int main()
{
	int n,k=1,j=1,temp=0,m=0,arr[10] = {0};			//输入的n不能大于10
	scanf_s("%d",&n);
	for (int i = 0; i < n; i++)
	{
		k = k * j;									//计算阶乘
		arr[i] = j;									//1到n赋值给数组
		j++;
	}
	for (int i = 0; i < k; i++)
	{
		for (int i = 0; i < n; i++)
		{
			printf("%d ",arr[i]);					//输出1到n的排列组合
		}
		printf("\n");
		temp = arr[m];								//相邻两个数字交换位置，排列出所有的组合，交换次数是阶乘
		arr[m] = arr[m + 1];						//最后会交换成数组初始排列，不过不会输出，并不会重复
		arr[m + 1] = temp;
		m++;
		if (m == n-1)m = 0;
	}
	return 0;
}