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
  int i;
  int len;
  char *dup;

  i = 0;
  len = ft_strlen(src) + 1;
  dup = (char *) malloc(len * sizeof(char));
  while(src[i] != '\0')
  {
    dup[i] = src[i];
    i++;
  }
  dup[len - 1] = '\0';
  return dup;
}