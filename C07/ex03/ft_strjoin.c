/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjanssen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 10:42:03 by sjanssen          #+#    #+#             */
/*   Updated: 2019/08/28 12:56:29 by sjanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strcount(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_arraycount(int size, char **strs)
{
	int total_count;
	int i;

	total_count = 0;
	i = 0;
	while (i < size)
		total_count += ft_strcount(strs[i++]);
	return (total_count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_count;
	int		i;
	char	*str;
	int		j;
	int		k;

	if (size == 0)
		return ("");
	total_count = (ft_strcount(sep) * (size - 1)) + ft_arraycount(size, strs);
	str = malloc(sizeof(char) * (total_count));
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			str[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && (i + 1 < size))
			str[k++] = sep[j++];
		i++;
	}
	return (str);
}
