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
	printf("*****����x��n�����õ¶���ʽ����*****\n");
	printf("������x��n��ֵ:");
	scanf("%d,%d",&x,&n);
	b = men(x,n);
	printf("%.2f",b);
}