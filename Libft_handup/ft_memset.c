/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkosteri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:47:33 by mkosteri          #+#    #+#             */
/*   Updated: 2021/10/18 11:47:35 by mkosteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str_cp;

	str_cp = (unsigned char *)b;
	while (len > 0)
	{
		*str_cp = (unsigned int)c;
		str_cp++;
		len--;
	}
	return (b);
}
