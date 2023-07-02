#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

t_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_show_tab(t_stock_str *par);
	
int	main(void)
{
	char *av[] = {"Hello ", "World!", " It's ", "Sunday :-)"};
	t_stock_str	*str_arr;

	str_arr = ft_strs_to_tab(4, av);
	ft_show_tab(str_arr);
	free(str_arr);

	return (0);
}
