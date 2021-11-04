#include<stdio.h>

int main(void)
{
    char	str[101];
    int		n;
    int		result;

    result = 0;
    scanf("%d", &n);
    scanf("%s", str);
    str[n] = 0;
    for (int i = 0; i < n; i++)
	result = result + str[i] - 48;
    printf("%d", result);
    return (0);
}
