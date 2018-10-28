#include<stdio.h>
int main()
{
	int i, j, res;
	i = 0, j = 0;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < i; j++)
		{
			printf("       ");
		}
		for (i = j; j <= 9; j++)
		{
			res = i * j;
			printf("%d*%d=%-2d ", i, j, res);
		}
		printf("\n");
	}
	return 0;
}
