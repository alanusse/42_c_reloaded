/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:28:37 by bautrodr          #+#    #+#             */
/*   Updated: 2023/09/06 10:12:28 by bautrodr         ###   ########.fr       */
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
