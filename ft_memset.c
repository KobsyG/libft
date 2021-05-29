/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeco <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 02:32:39 by gbeco             #+#    #+#             */
/*   Updated: 2020/11/24 14:26:24 by gbeco            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*pb;

	i = 0;
	pb = (unsigned char*)b;
	while (i < len)
	{
		pb[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
