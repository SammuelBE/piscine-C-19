/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjanssen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 18:47:26 by sjanssen          #+#    #+#             */
/*   Updated: 2019/08/18 19:11:42 by sjanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				countdest;
	unsigned int	i;

	i = 0;
	countdest = 0;
	while (dest[countdest])
		countdest++;
	while (src[i] && i < nb)
	{
		dest[i + countdest] = src[i];
		i++;
	}
	dest[i + countdest] = '\0';
	return (dest);
}
