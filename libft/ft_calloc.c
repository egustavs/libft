/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egustavs <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 14:50:19 by egustavs          #+#    #+#             */
/*   Updated: 2022/02/26 15:16:27 by egustavs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h" //allocate enough space for count object of size byte

void	*ft_calloc(size_t count, size_t size)
{
	void	*rtn;

	rtn = malloc(size * count);
	if (!rtn)
		return (NULL);
	ft_bzero(rtn, count * size);
	return (rtn);
}
