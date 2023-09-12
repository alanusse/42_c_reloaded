/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:30:49 by bautrodr          #+#    #+#             */
/*   Updated: 2023/09/04 16:17:03 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	i;
	int	x;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			x = 0;
			while (argv[i][x] != '\0')
			{
				ft_putchar(argv[i][x]);
				x++;
			}
			i++;
			ft_putchar('\n');
		}
	}
}
