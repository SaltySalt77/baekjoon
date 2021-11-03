#include<stdio.h>

int	main(void)
{
	int	max;
	int	average;
	int	n;
	int	tmp;

	max = -1;
	average = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &tmp);
		if (tmp > max)
			max = tmp;
		average += tmp;
	}
	printf("%f", (double) average / max * 100 / n);
	return (0);
}
