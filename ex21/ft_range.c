/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:15:30 by aglanuss          #+#    #+#             */
/*   Updated: 2023/09/12 15:15:53 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (max <= min)
		return (0);
	arr = (int *)malloc(sizeof(arr) * (max - min));
	i = 0;
	while (i < (max - min))
	{
		arr[i] = min + 1;
		i++;
	}
	return (arr);
}
