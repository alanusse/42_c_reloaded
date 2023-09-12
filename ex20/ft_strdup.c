/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:15:05 by aglanuss          #+#    #+#             */
/*   Updated: 2023/09/12 15:15:14 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	ft_strdup(char *src)
{
	char	*cpy;
	int		len;
	int		i;

	len = ft_strlen(src);
	cpy = (char *)malloc(sizeof(*src) * (len + 1));
	i = -1;
	while (++i < len)
		cpy[i] = src[i];
	cpy[len] = '\0';
	return (cpy);
}
