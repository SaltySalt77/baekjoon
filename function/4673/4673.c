#include<stdio.h>

int make_num(int n)
{
    int	result;

    result = n;
    while (n > 0)
    {
	result += n % 10;
	n /= 10;
    }
    return (result);
}

void	delete_non_selfnum(int *arr)
{
    for (int i = 1; i < 10001; i++)
    {
	if (make_num(i) - 1 < 10000 )
	    arr[make_num(i) - 1] = 0;
    }
}

int main(void)
{
    int	arr[10000];

    for (int i = 0; i < 10000; i++)
	arr[i] = i + 1;
    delete_non_selfnum(arr);
    for (int i = 0; i < 10000; i++)
    {
	if (arr[i] != 0)
	    printf("%d\n", arr[i]); 
    }
    return (0);
}
