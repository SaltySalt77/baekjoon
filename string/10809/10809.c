#include<stdio.h>

int main(void)
{
    char    str[101];
    int	    c;
    int	    pos;

    c = 'a';
    str[100] = 0;
    scanf("%s", str);
    while (c <= 'z')
    {
	pos = 0;
	while ((str[pos]) && (str[pos] != c))
	    pos++;
	if (str[pos] == c)
	    printf("%d", pos);
	else 
	    printf("-1");
	if (c != 'z')
	    printf(" ");
	c++;
    }
    return (0);
}
