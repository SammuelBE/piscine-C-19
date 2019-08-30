/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjanssen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 05:31:55 by sjanssen          #+#    #+#             */
/*   Updated: 2019/08/28 05:31:58 by sjanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int		length;

	i = 0;
	length = 0;
	while (dest[length] && length < size)
	{
		length++;
		i++;
	}
	while (src[length - i] && length + 1 < size)
	{
		dest[length] = src[length - i];
		length++;
	}
	if (i < size)
		dest[length] = '\0';
	length = 0;
	while (src[length])
		length++;
	return (i + length);
}
