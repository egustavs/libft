/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egustavs <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:50:19 by egustavs          #+#    #+#             */
/*   Updated: 2022/02/25 15:23:52 by egustavs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h" //locate byte i byte string

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
		if (*str++ == (unsigned char)c)
			return (str - 1);
	return (NULL);
}
