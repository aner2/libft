/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 16:47:26 by andsanch          #+#    #+#             */
/*   Updated: 2022/06/19 01:47:56 by andsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	d;
	unsigned char	*p;

	p = b;
	d = (unsigned char)c;
	while (len > 0)
	{
		*p = d;
		p++;
		len--;
	}
	return (b);
}
