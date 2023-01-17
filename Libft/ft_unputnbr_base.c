/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unputnbr_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:57:39 by abasterr          #+#    #+#             */
/*   Updated: 2023/01/17 19:27:24 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_unputnbr_base(unsigned long nbr, char *base)
{	
	int				count;
	unsigned int	base_len;

	count = 0;
	base_len = ft_strlen(base);
	if (nbr < base_len)
		count += ft_putchar(base[nbr]);
	else
	{
		count += ft_unputnbr_base(nbr / base_len, base);
		count += ft_unputnbr_base(nbr % base_len, base);
	}
	return (count);
}
