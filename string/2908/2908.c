#include<stdio.h>

int ft_strlen(char  *str)
{
    int len;

    len = 0;
    while (*str)
    {
	len++;
	str++;
    }
    return (len);
}

void	ft_rev_int_tab(char  *tab, int	size)
{
    char    temp;
    int	    i;
    int	    j;

    i = size - 1;
    j = 0;
    while (j < size / 2)
    {
	temp = *tab;
	*tab = *(tab + i);
	*(tab + i) = temp;
	tab++;
	i = i - 2;
	j++;
    }
}

int ft_atoi(char    *str)
{
    int	n;
    int result;

    result = 0;
    while ((*str >= '0') && (*str <= '9'))
    {
	n = *str - 48;
	result = result * 10 + n;
	str++;
    }
    return (result);
}

int main(void)
{
    char    str1[4];
    char    str2[4];
    int	    a;
    int	    b;

    str1[3] = 0;
    str2[3] = 0;
    scanf("%s %s", str1, str2);
    ft_rev_int_tab(str1, ft_strlen(str1));
    ft_rev_int_tab(str2, ft_strlen(str2));
    a = ft_atoi(str1);
    b = ft_atoi(str2);
    if (a > b)
	printf("%d", a);
    else 
	printf("%d", b);
    return (0);
}
