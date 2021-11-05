#include<stdio.h>

int main(void)
{
    char    str[21];
    int	    T;
    int	    R;
    int	    pos;

    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
	pos = 0;
	while (pos < 21)
	    str[pos++] = 0;
	pos = 0;
	scanf("%d %s", &R, str);
	while (str[pos])
	{
	    for (int j = 0; j < R; j++)
		printf("%c", str[pos]);
	    pos++;
	}
	printf("\n");
    }
    return (0);
}
