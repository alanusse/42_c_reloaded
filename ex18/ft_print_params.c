/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:57:02 by aglanuss          #+#    #+#             */
/*   Updated: 2023/09/12 15:57:03 by aglanuss         ###   ########.fr       */
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
