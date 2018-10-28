#include<stdio.h>
int main()
{
	int i, j, res;
	i = 1, j = 1;
	for (j = 1; j<10; j++)
	{
		for (i=1; i <= j; i++)
		{
			res = i * j;
			printf("%d*%d=%d\t", i, j, res);
		}
		printf("\n");
		
	}
	return 0;
}