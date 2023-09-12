/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:18:36 by aglanuss          #+#    #+#             */
/*   Updated: 2023/09/12 15:18:44 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}
