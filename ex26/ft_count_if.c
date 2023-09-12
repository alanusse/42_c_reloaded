/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:58:06 by aglanuss          #+#    #+#             */
/*   Updated: 2023/09/12 15:58:07 by aglanuss         ###   ########.fr       */
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

/*
int count(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'c')
            return (1);
        i++;
    }
    return (0);
}

#include <stdio.h>
int main()
{
    char * matt[] = {"hola", "como estas", "bien y tu", "c"};
    printf("la cantidad es: %i\n", ft_count_if(matt, &count));
    return 0;
}
*/
