/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 20:35:56 by andsanch          #+#    #+#             */
/*   Updated: 2022/06/18 21:02:08 by andsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*from;
	unsigned char	*to;

	from = (unsigned char *)src;
	to = (unsigned char *)dst;
	if (to < from)
	{
		while (len--)
			*to++ = *from++;
	}
	if (from < to)
	{
		from += len - 1;
		to += len - 1;
		while (len--)
			*to-- = *from--;
	}
	return (dst);
}
