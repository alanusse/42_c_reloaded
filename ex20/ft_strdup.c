#include <stdlib.h>

int ft_strlen(char *str)
{
  int count;

  count = 0;
  while(*str != '\0')
  {
    count++;
    str++;
  }
  return count;
}

char *ft_strdup(char *src)
{
  char *dup;
  int i;

  i = 0;
  dup = (char *) malloc(ft_strlen(src) * sizeof(char));
  while(src[i] != '\0')
  {
    dup[i] = src[i];
    i++;
  }
  return dup;
}