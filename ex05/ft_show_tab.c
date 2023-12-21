#include <stdio.h>
#include "ft_stock_str.h"
#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while(s1[i] || s2[i])
    {
        if(s1[i] == s2[i])
        {
            i++;
        }
        else
        {
            if(s1[i] < s2[i])
            {
                return -1;
            }

            if(s1[i] > s2[i])
            {
                return 1;
            }
        }
    }
    return 0;
}

void ft_putnbr(int n)
{
    int num;
    char c;

    num = n;

    if(num < 0)
    {
        write(1,'-',1);
    }

    if(num / 10 != 0)
    {
        if(num < 0)
        {
            ft_putnbr((num / 10) * -1);
        }
        else
        {
            ft_putnbr(num / 10);
        }
    }

    if(num < 0)
    {
        c = (((num % 10) * -1) + '0');
    }
    else
    {
        c = ((num % 10) + '0');
    }

    write(1,&c,1);
}

void ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    write(1,str,i);
}

void ft_show_tab(struct s_stock_str *par)
{
    int i = 0; 

    while(ft_strcmp(par[i].str,"0") != 0)
    {
        ft_putstr(par[i].str);
        write(1,"\n",2);

        ft_putnbr(par[i].size);
        write(1,"\n",2);

        ft_putstr(par[i].copy);
        write(1,"\n",2);
    }

    return;
}


void main()
{

}
