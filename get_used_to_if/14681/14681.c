#include<stdio.h>

int	main(void)
{
	int	x;
	int	y;

	scanf("%d %d", &x, &y);
	if (x < 0)
	{
		if (y < 0)
			printf("3");
		else
			printf("2");
	}
	else
	{
		if (y > 0)
			printf("1");
		else
			printf("4");
	}
	printf("\n");
	return (0);
}
