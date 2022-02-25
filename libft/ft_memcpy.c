/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egustavs <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:12:15 by egustavs          #+#    #+#             */
/*   Updated: 2021/11/03 14:12:18 by egustavs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // copy memory area

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	char *d;
	char *s;
	
	i = 0;
	d = (char *)dst;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
