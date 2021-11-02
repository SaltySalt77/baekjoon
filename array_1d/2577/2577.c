#include<stdio.h>

int	main(void)
{
	int	arr[10];
	int	a;
	int	b;
	int	c;

	for (int i = 0; i <= 9; i++)
		arr[i] = 0;
	scanf("%d %d %d", &a, &b, &c);
	a *= b * c;
	while (a > 10)
	{
		arr[a % 10]++;
		a /= 10;
	}
	arr[a]++;
	for (int i = 0; i <= 9; i++)
		printf("%d\n", arr[i]);
	return (0);
}
