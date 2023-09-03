#include <stdlib.h>

int     *ft_range(int min, int max)
{
    int *arr;
    int i;

    if (max <= min)
        return (0);
    arr = (int*)malloc(sizeof(arr) * (max - min));
    i = 0;
    while (i < (max - min))
    {
        arr[i] = min + 1;
        i++;
    }
    return (arr);
}
