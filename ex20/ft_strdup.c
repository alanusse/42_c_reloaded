/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:32:23 by aglanuss          #+#    #+#             */
/*   Updated: 2023/09/12 11:38:20 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dup;

	i = 0;
	len = ft_strlen(src) + 1;
	dup = (char *)malloc(len * sizeof(char));
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[len - 1] = '\0';
	return (dup);
}
