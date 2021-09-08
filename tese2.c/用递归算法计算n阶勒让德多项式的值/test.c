#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
float men(int x, int n)
{
	if (n == 0)
		return 1;
	else if (n == 1)
		return x;
	else
	{
		return ((2 * n - 1) * x * men(x, n - 1) - (n - 1) * men(x, n - 2)) / n;
	}
}
void main()
{
	int x = 0,n;
	float b;
	printf("*****计算x的n阶勒让德多项式程序*****\n");
	printf("请输入x和n的值:");
	scanf("%d,%d",&x,&n);
	b = men(x,n);
	printf("%.2f",b);
}