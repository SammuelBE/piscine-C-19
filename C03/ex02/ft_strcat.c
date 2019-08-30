/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjanssen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 19:04:46 by sjanssen          #+#    #+#             */
/*   Updated: 2019/08/18 19:10:51 by sjanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcat(char *dest, char *src)
{
	int i;
	int countdest;

	i = 0;
	countdest = 0;
	while (dest[countdest])
		countdest++;
	while (src[i])
	{
		dest[i + countdest] = src[i];
		i++;
	}
	dest[i + countdest] = '\0';
	return (dest);
}
