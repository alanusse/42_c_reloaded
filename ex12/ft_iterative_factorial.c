/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:56:05 by aglanuss          #+#    #+#             */
/*   Updated: 2023/09/12 15:56:07 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	x;

	i = 1;
	x = 1;
	if ((nb < 0) || (nb > 12))
		return (0);
	else if (nb == 0)
		return (1);
	while (i <= nb)
	{
		x = x * i;
		i++;
	}
	return (x);
}
