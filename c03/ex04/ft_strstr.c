/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-h <glopes-h@student.42roma.i>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:26:12 by glopes-h          #+#    #+#             */
/*   Updated: 2023/10/06 20:34:17 by glopes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len_to_find(char *to_find)
{
	int		len;

	len = 0;
	while (to_find[len] != 0)
		len++;
	return (len);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		len_find;

	len_find = len_to_find(to_find);
	i = 0;
	if (len_find == 0)
		return (str);
	while (str[i] != 0)
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i] == to_find[j] && to_find[j] != 0)
			{
				j++;
				i++;
			}
			if (to_find[j] == 0)
				return (&str[i - len_find]);
		}
		i++;
	}
	return (0);
}
