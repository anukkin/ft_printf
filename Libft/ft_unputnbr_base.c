/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unputnbr_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:57:39 by abasterr          #+#    #+#             */
/*   Updated: 2023/01/05 14:27:46 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_unputnbr_base(unsigned long int nbr, char *base)
{
	int				count;
	unsigned int	base_len;
	unsigned int	n;

	count = 0;
	base_len = ft_strlen(base);
	n = nbr;
	if (n < base_len)
		count += ft_putchar(base[n]);
	else
	{
		count += ft_unputnbr_base(n / base_len, base);
		count += ft_unputnbr_base(n % base_len, base);
	}
	return (count);
}
