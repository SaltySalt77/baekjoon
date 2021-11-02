#include<stdio.h>

int	main(void)
{
	int	hour;
	int	minute;

	scanf("%d %d", &hour, &minute);
	if (minute - 45 >= 0)
		printf("%d %d", hour, minute - 45);
	else if (hour != 0)
		printf("%d %d", hour - 1, 60 + minute - 45);
	else
		printf("23 %d", 60 + minute - 45);
	printf("\n");
	return (0);
}
