long long   sum(int *a, int n)
{
    int		i;
    long long	result;

    i = 0;
    result = 0;
    while (i < n)
	result += a[i++];
    return (result);
}
