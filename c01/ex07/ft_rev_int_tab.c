/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-h <glopes-h@student.42roma.i>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 19:02:38 by glopes-h          #+#    #+#             */
/*   Updated: 2023/09/24 20:00:27 by glopes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		counter;
	int		temp;

	counter = 0;
	while (counter < size)
	{
		temp = tab[counter];
		tab[counter] = tab[size - 1];
		tab[size - 1] = temp;
		counter++;
		size--;
	}
}
