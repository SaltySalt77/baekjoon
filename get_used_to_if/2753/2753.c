#include<stdio.h>
#include<unistd.h>

int	main(void)
{
	int	year;

	scanf("%d", &year);
	if (year % 100 == 0)
	{
		if (year % 400 == 0)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	else if (year % 4 == 0)
		write(1, "1", 1);
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}


