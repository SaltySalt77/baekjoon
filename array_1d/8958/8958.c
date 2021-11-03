#include<stdio.h>

int	ft_iterative_plus(int nb)
{
	int	result;

	result = 0;
	while (nb > 0)
	{
		result += nb;
		nb--;
	}
	return (result);
}

int	main(void)
{
	char	str[81];
	int	tmp;
	int	n;
	int	j;
	int	result;

	tmp = 0;
	result = 0; 
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", str);
		j = 0;
		while (str[j])
		{
			while (str[j] == 'O')
				tmp++;
			if (tmp != 0)
			{
				result += ft_iterative_plus(tmp);
				tmp = 0;
			}
			j++;
		}
		printf("%d", result);
	}
}
