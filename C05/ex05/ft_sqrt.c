int	ft_sqrt(int nb)
{
	long	i;

	if (nb <= 0 || nb == 2 || nb == 3 || nb == 5)
		return (0);
	if (nb == 1)
		return (1);
	if (nb <= 10000)
		i = 2;
	else if (nb <= 1000000)
		i = 101;
	else if (nb <= 100000000)
		i = 1001;
	else if (nb <= 400000000)
		i = 10001;
	else if (nb <= 900000000)
		i = 20001;
	else if (nb <= 1600000000)
		i = 30001;
	else
		i = 40001;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return i;
		i++;
	}
	return (0);
}
