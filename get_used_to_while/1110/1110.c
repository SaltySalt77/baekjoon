#include<stdio.h>

int	main(void)
{
	int	origin;
	int	cycle;
	int	temp;
	int	mod10;

	cycle = 0;
	temp = 0;
	scanf("%d", &origin);
	while (temp != origin)
	{
		if (cycle == 0)
			temp = origin;
		mod10 = temp / 10 + temp % 10;
		if (mod10 > 9)
			mod10 -= 10;
		temp = (temp % 10) * 10 + mod10;
		cycle++;
	}
	if (origin == 0)
		cycle++;
	printf("%d\n", cycle);
	return (0);
}

