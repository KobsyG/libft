/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeco <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:18:14 by gbeco             #+#    #+#             */
/*   Updated: 2020/11/25 17:20:47 by gbeco            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*pdst;
	unsigned char	*psrc;
	size_t			i;

	pdst = (unsigned char*)dst;
	psrc = (unsigned char*)src;
	if (!dst && !src)
		return (dst);
	if (dst < src)
	{
		i = 0;
		while (i < len)
		{
			pdst[i] = psrc[i];
			i++;
		}
	}
	else
	{
		while (len-- > 0)
		{
			pdst[len] = psrc[len];
		}
	}
	return (dst);
}
