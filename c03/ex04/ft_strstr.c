/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-h <glopes-h@student.42roma.i>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:26:12 by glopes-h          #+#    #+#             */
/*   Updated: 2023/10/12 14:55:30 by glopes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*return_size_find(char *to_find, char *str)
{
	while (*to_find != '\0')
	{
		str--;
		to_find++;
	}
	str++;
	return (str);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*f;

	f = to_find;
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			to_find++;
			if (*to_find == '\0')
			{
				to_find = f;
				return (return_size_find(to_find, str));
			}
		}
		else
			to_find = f;
		str++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strstr("Hello, World!", "llo"));
}*/
