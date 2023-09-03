#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char    ft_strdup(char *src)
{
    char    *cpy;
    int     len;
    int     i;

    len = ft_strlen(src);
    cpy = (char*)malloc(sizeof(*src) * (len + 1));
    i = -1;
    while (++i < len)
        cpy[i] = src[i];
    cpy[len] = '\0';
    return (cpy);
}