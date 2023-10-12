/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-h <glopes-h@student.42roma.i>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 20:25:37 by glopes-h          #+#    #+#             */
/*   Updated: 2023/09/28 10:19:39 by glopes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_num(char *str, int i)
{
	if ('0' <= str[i - 1] && str[i - 1] <= '9')
		return (1);
	else
		return (0);
}

int	is_low_alpha(char *str, int i)
{
	if ('a' <= str[i - 1] && str[i - 1] <= 'z')
		return (1);
	else
		return (0);
}

void	all_to_low(char *str, int i)
{
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	all_to_low(str, i);
	i = 1;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			if (is_num(str, i) == 0 && is_low_alpha(str, i) == 0)
			{
				str[i] -= 32;
				i++;
			}
		}
		i++;
	}
	if ('a' <= str[0] && str[0] <= 'z')
		str[0] -= 32;
	if ('A' <= str[1] && str[1] <= 'Z')
		str[1] += 32;
	return (str);
}
