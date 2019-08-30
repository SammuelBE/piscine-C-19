/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjanssen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 09:33:17 by sjanssen          #+#    #+#             */
/*   Updated: 2019/08/15 13:50:42 by sjanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[0] >= 'a' && str[0] <= 'z')
			str[i] -= 32;
		if ((str[i] >= 'a' && str[i] <= 'z')
				&& !(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				&& !(str[i - 1] >= '0' && str[i - 1] <= '9')
				&& !(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
			str[i] -= 32;
		i++;
	}
	return (str);
}