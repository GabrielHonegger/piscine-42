/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-h <glopes-h@student.42roma.i>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 20:16:54 by glopes-h          #+#    #+#             */
/*   Updated: 2023/10/03 20:37:16 by glopes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		odd;
	int		counter;

	odd = 1;
	counter = 0;
	while (nb > 0)
	{
		nb -= odd;
		odd += 2;
		counter++;
	}
	if (nb == 0)
		return (counter);
	return (0);
}
