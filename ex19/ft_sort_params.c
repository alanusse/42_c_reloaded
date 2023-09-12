/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:57:11 by aglanuss          #+#    #+#             */
/*   Updated: 2023/09/12 15:57:13 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_print_params(int argc, char **argv)
{
	int	i;

	i = 0;
	while (++i < argc)
		ft_putstr(argv[i]);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int		i;
	int		z;
	int		cmp;
	char	*x;

	if (argc > 1)
	{
		i = -1;
		while (++i < (argc - 1))
		{
			z = -1;
			while (++z < (argc - i - 2))
			{
				cmp = ft_strcmp(argv[z + 1], argv[z + 2]);
				if (cmp > 0)
				{
					x = argv[z + 1];
					argv[z + 1] = argv[z + 2];
					argv[z + 2] = x;
				}
			}
		}
		ft_print_params(argc, argv);
	}
	return (0);
}
