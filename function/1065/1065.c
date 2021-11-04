#include<stdio.h>

/* if nb is single digit or double digit, nb is always han num*/

int main(void)
{
    int	n;
    int	count;

    count = 0;
    scanf("%d", &n);
    if (n < 100)
    {
	for (int i = 1; i <= n; i++)
	    count++;
    }
    else
    {
	count = 99;
	for (int i = 100; i <= n; i++)
	{
	    if ((i / 100 - (i % 100) / 10) == ((i % 100) / 10 - (i % 10)))
		count++;
	}
    }
    printf("%d", count);
    return (0);
}
