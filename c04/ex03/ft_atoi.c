/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-h <glopes-h@student.42roma.i>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:17:43 by glopes-h          #+#    #+#             */
/*   Updated: 2023/10/01 16:17:11 by glopes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_add_num(char *str, int count_minus, int number)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == '-' || str[i] == '+')
			if (str[i++] == '-')
				count_minus++;
		if ('0' <= str[i] && str[i] <= '9')
		{
			number *= 10;
			number += str[i] - 48;
			i++;
			if (!('0' <= str[i] + 1 && str[i] + 1 <= '9'))
			{
				if (count_minus % 2 == 1)
					return (-number);
				return (number);
			}
		}
		else
			i++;
	}
	return (number);
}

int	ft_atoi(char *str)
{
	int		number;
	int		count_minus;

	number = 0;
	count_minus = 0;
	return (ft_add_num(str, count_minus, number));
}
