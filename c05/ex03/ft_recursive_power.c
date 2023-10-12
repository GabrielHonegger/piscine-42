/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-h <glopes-h@student.42roma.i>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:22:53 by glopes-h          #+#    #+#             */
/*   Updated: 2023/10/04 11:25:06 by glopes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0 && nb == 0)
		return (1);
	else if (power == 0)
		return (1);
	else if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	else if (power == 1)
		return (nb);
	return (0);
}
