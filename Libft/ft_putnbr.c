/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:57:39 by abasterr          #+#    #+#             */
/*   Updated: 2023/01/04 13:38:06 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n)
{
	unsigned int	nbr;

	nbr = 0;
	if (n == -2147483648)
	{
		nbr += ft_putchar('-');
		nbr += ft_putchar('2');
	}
	if (n < 0)
	{
		n = n * (-1);
		nbr += ft_putchar('-');
		nbr += ft_putnbr(n);
	}
	if (n < 10)
	{
		n = n + '0';
		nbr += ft_putchar(n);
	}
	else
	{
		nbr += ft_putnbr(n / 10);
		nbr += ft_putnbr(n % 10);
	}
	return (nbr);
}

int main()
{
		ft_putnbr(1);
	return (0);
}
