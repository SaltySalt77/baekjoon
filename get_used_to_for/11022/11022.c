#include<stdio.h>

int     main(void)
{
	int     max;
	int     a;
	int     b;

	scanf("%d", &max);
	for (int i = 0; i < max; i++)
	{
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i + 1, a, b, a + b);
	}
	return (0);
}
