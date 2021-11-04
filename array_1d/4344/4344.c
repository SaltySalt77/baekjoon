#include<stdio.h>

int	main(void)
{
    double  average;
    int	    c;
    int	    n;
    int	    score[1001];
    int	    j;
    int	    count;

    scanf("%d", &c);
    for (int i = 0; i < c; i++)
    {
	j = 0;
	average = 0;
	count = 0;
	scanf("%d", &n);
	for (int k = 0; k < n; k++)
	    scanf("%d", &score[k]);
	while (j < n)
	    average += score[j++];
	average = average / n;
	j = 0;
	while (j < n)
	{
	    if (score[j] > average)
		count++;
	    j++;
	}
	average = (double) count / n * 100;
	printf("%.3f%%\n", average);
    }
    return (0);
}
