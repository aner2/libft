/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 21:19:28 by andsanch          #+#    #+#             */
/*   Updated: 2022/06/19 00:27:47 by andsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	l_dst;
	size_t	l_src;

	l_src = ft_strlen(src);
	l_dst = ft_strlen(dst);
	if (l_dst >= dstsize)
		return (dstsize + l_src);
	i = 0;
	j = l_dst;
	if (dstsize > 0)
	{
		while (src[i] && l_dst + i < dstsize - 1)
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = 0;
	}
	return (l_src + l_dst);
}
