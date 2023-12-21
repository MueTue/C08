#include <stdio.h>
#include "ft_stock_str.h"
#include <stdlib.h>

char ft_strcpy(char *dest, char *src)
{
   int i = 0;

   while (src[i])
   {
      dest[i] = src[i];

      i++;
   }

   dest[i] = '\0';

   return dest;
}

int ft_strlen(char *str)
{
    int i = 0;
    
    while(str[i])
    {
        i++;
    }

    return i;
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    int i = 0;
    int f_size;

    t_stock_str *arr = malloc(sizeof(t_stock_str) * (ac + 1));

    while(i < ac)
    {
        f_size = ft_strlen(av[i]);

        arr[i].size = f_size;

        arr[i].str = malloc(sizeof(char) * (f_size + 1));
        ft_strcpy(arr[i].str,av[i]); 

        arr[i].copy = malloc(sizeof(char) * (f_size + 1));
        ft_strcpy(arr[i].copy,av[i]);

        i++;
    }

    arr[i].str = malloc(sizeof(char) * 2);
    ft_strcpy(arr[i].str,"0");

    return arr;
}

int main()
{
      
}