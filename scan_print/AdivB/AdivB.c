#include<stdio.h>

int	main(void)
{
	int	a;
	int	b;
	float	tmpa;
	float	tmpb;

	scanf("%d %d", &a, &b);
	tmpa = a;
	tmpb = b;
	printf("%f", tmpa / tmpb);
	return (0);
}
