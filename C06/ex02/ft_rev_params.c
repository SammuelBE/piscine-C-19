/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjanssen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 03:35:22 by sjanssen          #+#    #+#             */
/*   Updated: 2019/08/23 13:32:47 by sjanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int			main(int argc, char **argv)
{
	int i;

	(void)argc;
	i = 0;
	while (argv[i])
		i++;
	while (i > 1)
	{
		ft_putstr(argv[i - 1]);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
