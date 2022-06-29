/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 02:10:13 by andsanch          #+#    #+#             */
/*   Updated: 2022/06/27 16:08:29 by andsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*t;
	size_t			n;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		t = malloc(1);
		if (!t)
			return (NULL);
		t[0] = '\0';
		return (t);
	}
	t = malloc(ft_min(ft_strlen(s) - start, len) + 1);
	if (!t)
		return (NULL);
	n = 0;
	while (n < len && s[start + n])
	{
		t[n] = s[start + n];
		n++;
	}
	t[n] = '\0';
	return (t);
}
