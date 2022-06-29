/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 00:23:15 by andsanch          #+#    #+#             */
/*   Updated: 2022/06/19 01:58:43 by andsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	n;
	int				i;
	int				signo;

	i = 0;
	n = 0;
	signo = 1;
	while (str[i] == 32 || (str[i] <= 13 && str[i] >= 9))
			i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			signo *= -1;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		n *= 10;
		n += str[i] - '0';
		i++;
	}
	return ((int)(n * signo));
}
