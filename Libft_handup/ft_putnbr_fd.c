/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkosteri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:42:46 by mkosteri          #+#    #+#             */
/*   Updated: 2021/10/18 11:42:49 by mkosteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;

	nb = (long int)n;
	if (nb != 0)
	{
		ft_putstr_fd(ft_itoa(nb), fd);
	}
	else
	{
		ft_putstr_fd("0", fd);
	}
}
