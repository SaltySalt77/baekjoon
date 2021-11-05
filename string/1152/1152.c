#include<stdio.h>

int ft_strlen(char  *str)
{
    int len;

    len = 0;
    while (str[len])
	len++;
    return (len);
}

int main(void)
{
    char    str[1000000];
    int	    num;
    int	    pos;
    int	    len;

    num = 0;
    pos = 0;
    for (int j = 0; j < 1000000; j++)
	str[j] = 0;
    scanf("%[^\n]", str);
    len = ft_strlen(str);
    while (pos < len)
    {
        if (str[pos] == 32)
	    pos++;
        else
        {
	    while ((pos < len) && (str[pos] != 32))
	        pos++;
	    num++;
	}
    }
    printf("%d", num);
    return (0);
}
