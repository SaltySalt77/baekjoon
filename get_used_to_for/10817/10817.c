#include<stdio.h>

int	main(void)
{
	int	n;
	int	x;
	int	tmp;

	scanf("%d %d", &n, &x);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &tmp);
		if (tmp < x)
			printf("%d ", tmp);
	}
	return (0);
}
