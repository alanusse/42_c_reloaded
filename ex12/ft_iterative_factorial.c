int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if ((nb == 0) || (nb == 1))
		return (1);
	else if (nb > 1)
	{
		while (nb >= 1)
		{
			result = result * nb;
			nb--;
		}
		return (result);
	}
	return (0); 
}
