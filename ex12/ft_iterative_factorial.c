/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:09:33 by aglanuss          #+#    #+#             */
/*   Updated: 2023/09/12 15:09:44 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
