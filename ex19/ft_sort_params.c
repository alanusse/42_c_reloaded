/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:22:19 by aglanuss          #+#    #+#             */
/*   Updated: 2023/09/07 15:13:15 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_putchar.c"

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int ft_count_ascii(char *str)
{
	int	i;
	int count;

	i = 0;
	count = 0;
	while(*str != '\0')
	{
		count = count + *str;
		i++;
	}
	return (count);
}

void	ft_sort_params(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = i;
	while (i < argc)
	{
		while (j < argc)
		{
			if (ft_count_ascii(argc[i]) > ft_count_ascii(argc[j]))
			{
				
			}
			j++;
		}
		j = i;
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
	return (1);
}
