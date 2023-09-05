int ft_sqrt(int nb)
{
  int i;

  i = 1;

  if (nb < 1)
    return (0);

  while(i <= nb)
  {
    if (i * i == nb)
      return i;
    
    if (i * i > nb)
      return 0;
    i++;
  }

  return (i);
}