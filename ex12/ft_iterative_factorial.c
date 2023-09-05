int ft_iterative_factorial(int nb)
{
  if (nb < 0)
    return (0);

  if (nb == 0)
    return (1);

  int i;
  int result;

  i = nb - 1;
  result = nb;
  while (i > 0)
  {
    result = result * i;
    i--;
  }

  return result;
}