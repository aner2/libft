/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 20:46:43 by andsanch          #+#    #+#             */
/*   Updated: 2022/06/18 20:50:55 by andsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	d;
	unsigned char	*t;

	i = 0;
	t = (unsigned char *)s;
	d = (unsigned char)c;
	while (i < n)
	{
		if (t[i] == d)
			return ((void *)(t + i));
		i++;
	}
	return (NULL);
}
