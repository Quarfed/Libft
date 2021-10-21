/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkosteri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:49:33 by mkosteri          #+#    #+#             */
/*   Updated: 2021/10/18 11:49:35 by mkosteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s1, int c)
{
	size_t	len;

	len = ft_strlen(s1);
	if (c == '\0')
		return ((char *)s1 + len);
	while (len-- > 0)
		if (s1[len] == (char)c)
			return ((char *)s1 + len);
	return (NULL);
}
