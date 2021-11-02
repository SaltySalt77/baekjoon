#include<stdio.h>

int	main(void)
{
	int	max;
	int	min;
	int	temp;
	int	rep_max;

	scanf("%d", &rep_max);
	for (int i = 0; i < rep_max; i++)
	{
		scanf("%d", &temp);
		if (i == 0)
		{
			max = temp;
			min = temp;
		}
		else if (temp > max)
			max = temp;
		else if (temp < min)
			min = temp;
	}
	printf("%d %d\n", min, max);
	return (0);
}
