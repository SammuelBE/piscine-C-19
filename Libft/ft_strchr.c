/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjanssen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:47:21 by sjanssen          #+#    #+#             */
/*   Updated: 2019/10/07 11:58:46 by sjanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(char *str, int c)
{
	int i;

	i = 0;
	while (*str)
	{
		if (*str == c)
			return (&(*str));
		str++;
	}
	if (*str == c)
		return (&(*str));
	return (NULL);
}

int		main(void)
{
	printf("%s\n", "Hello You World");
	printf("%s\n", strchr("Hello You World", 'o'));
	printf("%s\n", ft_strchr("Hello You World", 'o'));
	printf("\n");
	printf("%s\n", "Nonex");
	printf("%s\n", strchr("Nonex", 'z'));
	printf("%s\n", ft_strchr("Nonex", 'z'));
	printf("\n");
	printf("%s\n", "You you");
	printf("%s\n", strchr("You you", '\0'));
	printf("%s\n", ft_strchr("You you", '\0'));
	printf("\n");
	printf("%s\n", "Mamamoumou");
	printf("%s\n", strchr("Mamamoumou", 'M'));
	printf("%s\n", ft_strchr("Mamamoumou", 'M'));
	printf("\n");
	return (0);
}
