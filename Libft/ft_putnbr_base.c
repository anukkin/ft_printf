/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:57:39 by abasterr          #+#    #+#             */
/*   Updated: 2023/01/05 14:25:05 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_base(int nbr, char *base)
{
	int	count;
	int base_len;


	count = 0;
	base_len = ft_strlen(base);
	if (nbr == -2147483648)
	{
		count += ft_putchar('-');
		count += ft_putchar('2');
		nbr = 147483648;
	}
	if (nbr < 0)
	{
		count += ft_putchar('-');
		nbr = nbr * (-1);
	}
	if (nbr < base_len)
		count += ft_putchar(base[nbr]);
	else
	{
		count += ft_putnbr_base(nbr / base_len, base);
		count += ft_putnbr_base(nbr % base_len, base);
	}
	return (count);
}
