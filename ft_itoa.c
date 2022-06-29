/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:37:14 by andsanch          #+#    #+#             */
/*   Updated: 2022/06/21 18:59:02 by andsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(long n)
{
	int	size;

	n *= ((n > 0) - (n < 0));
	size = 1;
	while (n / 10)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

static char	dummy(int n)
{
	if (n == 1)
		return ('-');
	return ('\0');
}

char	*ft_itoa(int n)
{
	char	*c;
	int		size;
	long	m;
	int		sgn;

	sgn = 0;
	m = (long)n;
	if (m < 0)
	{
		sgn = 1;
		m *= -1;
	}
	size = ft_size(m);
	c = (char *)malloc(size + sgn + 1);
	if (!c)
		return (NULL);
	c[size + sgn] = '\0';
	c[0] = dummy(sgn);
	while (size > 0)
	{
		c[size + sgn - 1] = m % 10 + '0';
		m = m / 10;
		size--;
	}
	return (c);
}
