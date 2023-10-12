/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-h <glopes-h@student.42roma.i>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:06:03 by glopes-h          #+#    #+#             */
/*   Updated: 2023/10/04 11:12:36 by glopes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int		i;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	i = nb - 1;
	while (i > 0)
	{
		nb *= i;
		i--;
	}
	return (nb);
}
