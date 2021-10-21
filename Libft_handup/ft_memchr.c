/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkosteri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:47:03 by mkosteri          #+#    #+#             */
/*   Updated: 2021/10/18 11:47:13 by mkosteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s_cp;

	s_cp = (const unsigned char *)s;
	c = (unsigned char)c;
	while (n > 0)
	{
		if (*s_cp == c)
			return ((void *)s_cp);
		s_cp++;
		n--;
	}
	return (NULL);
}
