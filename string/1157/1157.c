#include<stdio.h>

int main(void)
{
    char    str[1000001];
    char    c;
    int	    alpha[26];
    int	    i;
    int	    max;

    i = 0;
    scanf("%s", str);
    while (str[i])
    {
	if ((str[i] >= 'A') && (str[i] <= 'Z'))
	    alpha[str[i] - 'A']++;
	else
	    alpha[str[i] - 'a']++;
	i++;
    }
    max = 0;
    i = 0;
    while (i < 26)
    {
	if (alpha[i] > max)
	    max = alpha[i];
	i++;
    }
    i--;
    while ((i > -1) && (alpha[i] != max))
	i--;
    if (alpha[i] == max)
	c = i + 'A';
    i--;
    while ((i > -1) && (alpha[i] != max))
	i--;
    if (i == -1)
	printf("%c\n", c);
    else
	printf("?\n");
    return (0);
}
