#include<stdio.h>

int	main(void)
{
	int	arr[10];
	int	j;
	int	k;

	j = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		arr[i] %= 42;
	}
	while (j < 10)
	{
		k = j + 1;
		while (k < 10)
		{
			if (arr[j] == arr[k])
				arr[k] = -1;
			k++;
		}
		j++;
	}
	k = 0;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] != -1)
			k++;
	}
	printf("%d\n", k);
	return (0);
}
