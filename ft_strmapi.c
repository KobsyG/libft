/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeco <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:25:36 by gbeco             #+#    #+#             */
/*   Updated: 2020/11/26 14:54:04 by gbeco            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s2;
	unsigned int	i;

	if (!(s2 = ft_strdup(s)))
		return (NULL);
	i = 0;
	while (s2[i])
	{
		s2[i] = (*f)(i, s[i]);
		i++;
	}
	return (s2);
}
