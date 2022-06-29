/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:41:40 by andsanch          #+#    #+#             */
/*   Updated: 2022/06/28 15:48:01 by andsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	size_t	left;
	size_t	right;
	size_t	iter;

	if (!s1)
		return (NULL);
	if (*set == '\0' || set == NULL)
		return (ft_strdup(s1));
	left = 0;
	right = ft_strlen(s1);
	while ((ft_strchr(set, s1[left])) != 0 && (left < right))
		left++;
	while ((ft_strchr(set, s1[right])) != 0 && (left < right))
		right--;
	if (right == 0)
		return (ft_strdup(""));
	s = (char *)malloc(right - left + 1);
	if (!s)
		return (NULL);
	iter = 0;
	while (left <= right)
		s[iter++] = s1[left++];
	s[iter] = '\0';
	return (s);
}
