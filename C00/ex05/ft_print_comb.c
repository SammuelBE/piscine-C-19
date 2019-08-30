/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjanssen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 12:40:22 by sjanssen          #+#    #+#             */
/*   Updated: 2019/08/11 11:00:35 by sjanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int		digit_1;
	int		digit_2;
	int		digit_3;

	digit_1 = '0';
	while (digit_1 < '8')
	{
		digit_2 = digit_1 + 1;
		while (digit_2 <= '9')
		{
			digit_3 = digit_2 + 1;
			while (digit_3 <= '9')
			{
				write(1, &digit_1, 1);
				write(1, &digit_2, 1);
				write(1, &digit_3, 1);
				if (digit_1 < '7')
					write(1, ", ", 2);
				digit_3++;
			}
			digit_2++;
		}
		digit_1++;
	}
}
