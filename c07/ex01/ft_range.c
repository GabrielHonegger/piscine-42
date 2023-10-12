/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-h <glopes-h@student.42roma.i>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:07:24 by glopes-h          #+#    #+#             */
/*   Updated: 2023/10/06 12:11:58 by glopes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		len;
	int		*array_ints;
	int		i;

	len = max - min;
	if (len == 0 || min >= max)
		return (NULL);
	i = 0;
	array_ints = (int *)malloc(len * sizeof(int));
	if (array_ints == NULL)
		return (NULL);
	while (min < max)
	{
		array_ints[i] = min;
		min++;
		i++;
	}
	return ((int *)array_ints);
}
