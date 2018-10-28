#include <stdio.h>
int main() 
{
	int i,re;
	int b1, b2, b3, b4, b5;
	b1 = 100000 * 0.1;
	b2 = b1 + 100000 * 0.075;
	b3 = b2 + 200000 * 0.05;
	b4 = b3 + 200000 * 0.03;
	b5 = b4 + 400000 * 0.015;
	scanf("%d", &i);
	if (i > 1000000)
	{
		re = b5 + (i - 1000000)*0.01;
	}
	else if (i > 600000)
	{
		re = b4 + (i - 600000)*0.015;
	}
	else if (i > 400000)
	{
		re = b3 + (i - 400000)*0.03;
	}
	else if (i > 200000)
	{
		re = b2 + (i - 200000)*0.05;
	}
	else if (i > 100000)
	{
		re = b1 + (i - 100000)*0.075;
	}
	else
	{
		re = i * 0.1;
	}
	printf("bouns=%d", re);
	return 0;
}