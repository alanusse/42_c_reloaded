int	ft_sqrt(int nb)
{
	int	tmp;
	int	counter;
	int	result;

	tmp = nb;
	counter = 1;
	while (counter != nb)
	{
		result = tmp / counter;
		if (result * result == nb)
			return (result);
		counter++;
	}
	return (0);
}
