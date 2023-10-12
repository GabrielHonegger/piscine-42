/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-h <glopes-h@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:45:31 by glopes-h          #+#    #+#             */
/*   Updated: 2023/09/24 11:40:52 by glopes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_end(int dig1, int dig2, int dig3)
{
	write(1, &dig1, 1);
	write(1, &dig2, 1);
	write(1, &dig3, 1);
}

void	write_comb(int dig1, int dig2, int dig3)
{
	write(1, &dig1, 1);
	write(1, &dig2, 1);
	write(1, &dig3, 1);
	write(1, ", ", 2);
}

void	loop_comb(int dig1, int dig2, int dig3)
{
	while (dig1 <= '9')
	{
		while (dig2 <= '9')
		{
			while (dig3 <= '9')
			{
				if (dig1 == '7' && dig2 == '8' & dig3 == '9')
				{
					write_end(dig1, dig2, dig3);
					break ;
				}
				else
				{
					write_comb(dig1, dig2, dig3);
					dig3++;
				}
			}
			dig2++;
			dig3 = dig2 + 1;
		}
		dig1++;
		dig2 = dig1;
	}
}

void	ft_print_comb(void)
{
	int		dig1;
	int		dig2;
	int		dig3;
	int		del;

	dig1 = '0';
	dig2 = dig1 + 1;
	dig3 = dig2 + 1;
	del = 8;
	loop_comb(dig1, dig2, dig3);
}
