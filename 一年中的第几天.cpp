#include <stdio.h>
int main()
{
	int year, mooth, day;
	scanf("%d %d %d", &year, &mooth, &day);
	switch (mooth)
	{
	case 2:day += 31; break;
	case 3:day += 59; break;
	case 4:day += 90; break;
	case 5:day += 120; break;
	case 6:day += 151; break;
	case 7:day += 181; break;
	case 8:day += 212; break;
	case 9:day += 243; break;
	case 10:day += 273; break;
	case 11:day += 304; break;
	case 12:day += 334; break;
		default:
		break;
	}
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		day++;
	}
	printf("%d", day);
	return 0;
}