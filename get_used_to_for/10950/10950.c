#include<stdio.h>

int	main(void)
{
	int	max;
	int	a;
	int	b;

	scanf("%d", &max);
	for (int i = 0; i < max; i++)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	return (0);
}
