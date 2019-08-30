/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjanssen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 05:01:02 by sjanssen          #+#    #+#             */
/*   Updated: 2019/08/22 17:49:09 by sjanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index >= 3)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	else
		return (1);
}
