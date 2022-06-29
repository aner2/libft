/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 21:30:48 by andsanch          #+#    #+#             */
/*   Updated: 2022/06/18 21:56:10 by andsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*t;
	unsigned char	d;

	d = (unsigned char)c;
	t = s;
	while (*s)
		s++;
	while (s != t)
	{
		if (*s == d)
			return ((char *)s);
		s--;
	}
	if (*s == d)
		return ((char *)s);
	return (NULL);
}
