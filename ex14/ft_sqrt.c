/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:10:19 by aglanuss          #+#    #+#             */
/*   Updated: 2023/09/12 15:10:24 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	tmp;
	int	counter;
	int	result;

	tmp = nb;
	counter = 1;
	while (counter != nb)
	{
		result = tmp / counter;
		if (result * result == nb)
			return (result);
		counter++;
	}
	return (0);
}
