#include <unistd.h>
#include "ft_stock_str.h"

void	ft_print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_print_pos_num(int nb)
{
	if (nb >=0 && nb <=9)
		write(1, &"0123456789"[nb], 1);
	else
	{
		ft_print_pos_num(nb / 10);
		ft_print_pos_num(nb % 10);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_print_str(par[i].str);
		ft_print_str("\n");
		ft_print_pos_num(par[i].size);
		ft_print_str("\n");
		ft_print_str(par[i].copy);
		ft_print_str("\n");
		i++;
	}
}
