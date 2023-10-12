/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-h <glopes-h@student.42roma.i>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 20:52:24 by glopes-h          #+#    #+#             */
/*   Updated: 2023/10/11 11:29:49 by glopes-h         ###   ########.fr       */
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
	return (counter);
}

int	ft_is_prime(int nb)
{
	int		num;
	int		limit;

	num = 3;
	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (1);
	else if (nb % 2 == 0)
		return (0);
	limit = ft_sqrt(nb);
	while (num <= limit)
	{
		if (nb % num == 0)
			return (0);
		num += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	else if (ft_is_prime(nb) == 1)
		return (nb);
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}
