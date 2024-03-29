/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egustavs <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:48:25 by egustavs          #+#    #+#             */
/*   Updated: 2022/02/25 16:12:19 by egustavs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h" //locate character in string with last occurence of c

char	*ft_strrchr(const char *s, unsigned int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == 0)
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
