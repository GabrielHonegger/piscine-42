/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-h <glopes-h@student.42roma.i>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:38:22 by glopes-h          #+#    #+#             */
/*   Updated: 2023/10/10 21:39:40 by glopes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char	*ft_strdup(char *str)
{
	char	*dup;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (str[len] != '\0')
		len++;
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (!(dup))
		return (NULL);
	while (str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*my_strs;

	my_strs = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!(my_strs))
		return (NULL);
	my_strs->size = 0;
	my_strs->str = 0;
	my_strs->copy = 0;
	i = 0;
	while (i < ac)
	{
		my_strs[i].size = (int)malloc(sizeof(int));
		if (!(my_strs[i].size))
			return (NULL);
		my_strs[i].size = ft_strlen(av[i]);
		my_strs[i].str = malloc((sizeof(char) * (ft_strlen(av[i]) + 1)));
		if (!(my_strs[i].str))
			return (NULL);
		my_strs[i].str = av[i];
		my_strs[i].copy = ft_strdup(av[i]);
		i++;
	}
	my_strs[i] = (t_stock_str){0, NULL, NULL};
	return (my_strs);
}
/*
#include <stdio.h>

int	main(void)
{
	char *strs[4];
	int size;
	struct s_stock_str *test;
	int i;

	i = 0;
	strs[0] = "Hello";
	strs[1] = "Ciao";
	strs[2] = "Come Va";
	strs[3] = "Fine Settinama";
	size = 4;
	test = ft_strs_to_tab(size, strs);
	while (i < 5)
	{
		printf("Struct %d\n", i);
		printf("size: %d\n", test[i].size);
		printf("str: %s\n", test[i].str);	
		printf("copy: %s\n\n", test[i].copy);
		i++;
	}
}*/
