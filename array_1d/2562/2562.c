#include<stdio.h>

int	main(void)
{
	int	arr[9];
	int	pos;

	pos = 0;
	for (int i = 0; i < 9; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < 9; i++)
	{
		if (arr[pos] < arr[i])
			pos = i;
	}
	printf("%d\n%d\n", arr[pos], pos + 1);
	return (0);
}
