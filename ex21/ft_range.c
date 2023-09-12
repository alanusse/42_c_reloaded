/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:57:25 by aglanuss          #+#    #+#             */
/*   Updated: 2023/09/12 15:57:26 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	arr = (int *)malloc(sizeof(*arr) * (max - min + 1));
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	arr[i] = '\0';
	return (arr);
}
