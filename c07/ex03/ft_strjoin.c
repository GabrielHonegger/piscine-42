/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-h <glopes-h@student.42roma.i>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:20:27 by glopes-h          #+#    #+#             */
/*   Updated: 2023/10/09 12:57:08 by glopes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len_strs(int size, char **strs)
{
	int		i;
	int		j;
	int		total_size;

	i = 0;
	total_size = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			total_size++;
			j++;
		}
		i++;
	}
	return (total_size);
}

char	*cat_everything(int size, char **strs, char *sep, char *dest)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (i < size)
	{
		if (strs[i] == NULL)
			i++;
		else
		{
			j = 0;
			while (strs[i][j] != '\0')
				dest[k++] = strs[i][j++];
			j = 0;
			while (sep[j] != '\0' && i < size - 1)
				dest[k++] = sep[j++];
			i++;
		}
	}
	dest[k] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		j;
	int		len;
	char	*dest;

	if (size <= 0 || strs == NULL)
		return (NULL);
	j = 0;
	while (j < size)
	{
		if (strs[j] == NULL)
			return (NULL);
		j++;
	}
	len = 0;
	j = 0;
	len = len_strs(size, strs);
	while (sep[j] != '\0')
		j++;
	len += j * (size - 1);
	dest = ((char *)malloc((len + 1) * sizeof(char)));
	if (dest == NULL)
		return (NULL);
	return (cat_everything(size, strs, sep, dest));
}
/*
#include <stdio.h>
int main() {
    // Test cases
    char *strs1[] = {"Hello", "world", "!", NULL};
    char *strs2[] = {"This", "is", "a", "test", NULL};
    char *strs3[] = {NULL};
    char *strs4[] = {"", "Separators", "", "Between", "Words", "", NULL};
    char *strs5[] = {NULL, "Hello", "World", NULL};
    char *strs6[] = {NULL, NULL, NULL, NULL};

    char *sep1 = " ";
    char *sep2 = "-";
   	char *sep3 = NULL;

    char *result1 = ft_strjoin(3, strs1, sep1);
    char *result2 = ft_strjoin(4, strs2, sep2);
    char *result3 = ft_strjoin(1, strs3, sep1);
    char *result4 = ft_strjoin(6, strs4, sep2);
    char *result5 = ft_strjoin(4, strs5, sep3);
    char *result6 = ft_strjoin(4, strs6, sep1);

    // Printing the results
    printf("Result 1: %s\n", result1);
    printf("Result 2: %s\n", result2);
    printf("Result 3: %s\n", result3);
    printf("Result 4: %s\n", result4);
    printf("Result 5: %s\n", result5);
    printf("Result 6: %s\n", result6);

    // Free the allocated memory
    free(result1);
    free(result2);
    free(result3);
    free(result4);
    free(result5);
    free(result6);

    return 0;
}*/
