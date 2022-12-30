/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egustavs <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:44:58 by egustavs          #+#    #+#             */
/*   Updated: 2022/02/25 15:16:38 by egustavs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" //size-bounded string cpy and conctenation

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{	
	char		*p1;
	const char	*p2;
	size_t		i;
	size_t		dlen;

	i = size;
	p1 = dst;
	while (*p1 != '\0' && i-- != 0)
		p1++;
	dlen = p1 - dst;
	i = size - dlen;
	p2 = src;
	if (!i)
		return (dlen + ft_strlen(p2));
	while (*p2 != '\0')
	{
		if (i != 1)
		{
			*p1++ = *p2;
			i--;
		}
		p2++;
	}
	*p1 = '\0';
	return (dlen + (p2 - src));
}
