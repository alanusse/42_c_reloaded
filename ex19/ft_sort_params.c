/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agustinlanusse <agustinlanusse@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:22:19 by aglanuss          #+#    #+#             */
/*   Updated: 2023/09/07 20:17:30 by agustinlanu      ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

void ft_sort_params(int count, char **params)
{
	int	i;
	int	step;
	char *tmp;

	step = 0;
	i = 1;
	while (step < count)
	{
		while (i < count - 1) {
			if (ft_strcmp(params[i], params[i+1]) > 0)
			{
				tmp = params[i];
				params[i] = params[i+1];
				params[i+1] = tmp;
			}
			i++;
		}
		i = 1;
		step++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort_params(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (1);
}
