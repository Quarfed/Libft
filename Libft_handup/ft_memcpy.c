/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkosteri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:36:33 by mkosteri          #+#    #+#             */
/*   Updated: 2021/10/18 11:36:38 by mkosteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d_str;
	const unsigned char	*s_str;

	d_str = (unsigned char *)dest;
	s_str = (const unsigned char *)src;
	if (n == 0 || dest == src)
		return ((void *)dest);
	while (n > 0)
	{
		*d_str++ = *s_str++;
		n--;
	}
	return ((void *)dest);
}
