/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egustavs <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:50:39 by egustavs          #+#    #+#             */
/*   Updated: 2022/02/25 15:12:02 by egustavs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // writes len bytes of value c to string b

void	*ft_memset(void *b, int c, size_t len)
{
	char	*d;

	d = (char *)b;
	while (len > 0)
	{
		d[len - 1] = c;
		len--;
	}
	return (b);
}
