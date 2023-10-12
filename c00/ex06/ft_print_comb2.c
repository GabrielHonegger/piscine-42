/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-h <glopes-h@student.42roma.i>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 10:59:48 by glopes-h          #+#    #+#             */
/*   Updated: 2023/09/24 11:38:57 by glopes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_comb1(int n[0])
{
	char	c;
	int		zero;
	int		space;
	int		high_n1;
	int		low_n1;

	low_n1 = n[0] % 10 + 48;
	high_n1 = n[0] / 10 + 48;
	space = ' ';
	zero = '0';
	c = n[0] + 48;
	if (n[0] <= 9)
	{
		write(1, &zero, 1);
		write(1, &c, 1);
		write(1, &space, 1);
	}
	else
	{
		write(1, &high_n1, 1);
		write(1, &low_n1, 1);
		write(1, &space, 1);
	}
}

void	write_comb2(int n[1])
{
	char	c;
	int		zero;
	int		high_n2;
	int		low_n2;

	low_n2 = n[1] % 10 + 48;
	high_n2 = n[1] / 10 + 48;
	zero = '0';
	c = n[1] + 48;
	if (n[1] <= 9)
	{
		write(1, &zero, 1);
		write(1, &c, 1);
	}
	else
	{
		write(1, &high_n2, 1);
		write(1, &low_n2, 1);
	}
}

void	ft_print_comb2(void)
{
	int		n[2];

	n[0] = 0;
	while (n[0] <= 99)
	{
		n[1] = n[0] + 1;
		while (n[1] <= 99)
		{
			write_comb1(n);
			write_comb2(n);
			if (!(n[0] == 98 && n[1] == 99))
				write(1, ", ", 2);
			n[1]++;
		}
		n[0]++;
	}
}
