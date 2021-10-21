/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkosteri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:43:53 by mkosteri          #+#    #+#             */
/*   Updated: 2021/10/18 11:44:30 by mkosteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	const char	*str;

	if (!dest || !src)
		return (0);
	str = src;
	if (size != 0)
	{
		while (*str != '\0' && --size)
			*dest++ = *str++;
		*dest = '\0';
	}
	while (*str != '\0')
		str++;
	return (str - src);
}
