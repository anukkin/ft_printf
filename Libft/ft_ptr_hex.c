/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:26:38 by abasterr          #+#    #+#             */
/*   Updated: 2023/01/17 19:51:30 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ptr_hex(void *ptr, char *base)
{
	unsigned long	nbr;
	int				count;

	nbr = (unsigned long)ptr;
	count = 2;
	write(1, "0x", 2);
	if (!nbr)
		count += write(1, "0", 1);
	else
		count += ft_unputnbr_base(nbr, base);
	return (count);
}
