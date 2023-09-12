/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_range.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:41:05 by aglanuss          #+#    #+#             */
/*   Updated: 2023/09/12 12:11:11 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;

	if (min >= max)
	{
		ptr = NULL;
		return (ptr);
	}
	i = 0;
	ptr = (int *)malloc((max - min) * sizeof(int));
	while (i < (max - min))
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
