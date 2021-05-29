/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeco <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 02:36:51 by gbeco             #+#    #+#             */
/*   Updated: 2021/01/09 10:50:29 by gbeco            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		if (!(s2 = malloc(1)))
			return (NULL);
		s2[0] = 0;
		return (s2);
	}
	i = 0;
	if (len > ft_strlen(s))
		len = ft_strlen(s) - start;
	if (!(s2 = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len && s[start] != 0)
	{
		s2[i] = s[start];
		i++;
		start++;
	}
	s2[i] = 0;
	return (s2);
}
