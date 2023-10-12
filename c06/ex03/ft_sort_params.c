/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-h <glopes-h@student.42roma.i>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 22:13:24 by glopes-h          #+#    #+#             */
/*   Updated: 2023/10/10 22:19:36 by glopes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	bubble_sort(int ac, char **av)
{
	int		i;
	int		j;
	char	*swap;

	i = 1;
	j = 1;
	while (i < ac)
	{
		j = 1;
		while (j < ac -1)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
			{
				swap = av[j];
				av[j] = av[j + 1];
				av[j + 1] = swap;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 1;
	if (argc == 1)
		return (0);
	bubble_sort(argc, argv);
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
