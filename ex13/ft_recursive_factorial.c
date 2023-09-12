/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:10:00 by aglanuss          #+#    #+#             */
/*   Updated: 2023/09/12 15:10:04 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if ((nb == 1) || (nb == 0))
		return (1);
	else if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	return (0);
}
