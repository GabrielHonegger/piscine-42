#include <unistd.h>

void	ft_print_comb2(void)
{
	int n1;
	int n2;
	int low_n1;
	int high_n1;

	n1 = '0';
	n2 = '0';

	while (n1++, n1 <= '5')
	{
		write(1, &low_n1, 1);
		write(1, &high_n1, 1);
		low_n1 = n1 % 10;
		high_n1 = n1 / 10;	
	}
}

int	main(void)
{
	ft_print_comb2();
}
