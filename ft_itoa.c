/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeco <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 13:15:19 by gbeco             #+#    #+#             */
/*   Updated: 2021/01/10 10:08:05 by gbeco            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbrdigit(long n)
{
	int len;

	if (n <= 0)
	{
		len = 1;
		n = n * -1;
	}
	else
		len = 0;
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int		len;
	char	*nbr;
	long	nb;

	nb = n;
	len = nbrdigit(nb);
	if (!(nbr = malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (nb == 0)
		nbr[0] = '0';
	else if (nb < 0)
	{
		nbr[0] = '-';
		nb = nb * -1;
	}
	nbr[len] = 0;
	while (nb > 0)
	{
		nbr[--len] = (nb % 10) + 48;
		nb = nb / 10;
	}
	return (nbr);
}
