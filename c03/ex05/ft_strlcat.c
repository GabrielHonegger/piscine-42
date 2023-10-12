/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-h <glopes-h@student.42roma.i>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:28:44 by glopes-h          #+#    #+#             */
/*   Updated: 2023/10/07 11:47:37 by glopes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	size_dest;
	unsigned int	size_src;
	unsigned int	i;

	i = 0;
	size_dest = 0;
	size_src = 0;
	while (src[size_src] != 0)
		size_src++;
	while (dest[size_dest] != 0)
		size_dest++;
	if (size_dest == size)
		return (size + size_src);
	while (src[i] != 0 && i + size_dest < size - 1)
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (size_dest + size_src);
}
