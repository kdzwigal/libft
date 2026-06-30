/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdzwigal <kdzwigal@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 11:25:08 by kdzwigal          #+#    #+#             */
/*   Updated: 2026/06/16 11:25:10 by kdzwigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmpd;
	unsigned char	*tmps;

	if (!dest && !src)
		return (NULL);
	i = 0;
	tmpd = (unsigned char *)dest;
	tmps = (unsigned char *)src;
	if (tmpd > tmps)
	{
		while (n > 0)
		{
			n--;
			tmpd[n] = tmps[n];
		}
	}
	else
	{
		while (i < n)
		{
			tmpd[i] = tmps[i];
			i++;
		}
	}
	return (dest);
}
