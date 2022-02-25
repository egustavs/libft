/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egustavs <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:07:24 by egustavs          #+#    #+#             */
/*   Updated: 2022/02/24 13:46:42 by egustavs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" //write zeroes to a byte string

void ft_bzero(void *s, size_t n)
{
	unsigned char *str;

	str = (unsigned char *)s;
	while (n--)
		*str++ = '\0';
}
