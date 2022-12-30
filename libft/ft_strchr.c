/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egustavs <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:15:42 by egustavs          #+#    #+#             */
/*   Updated: 2022/02/25 16:12:22 by egustavs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h" //locate character in string

char	*ft_strchr(const char *s, unsigned int c)
{	
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	if (!c && s[i] == '\0')
		return ((char *)s + i);
	return (NULL);
}
