/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:53:32 by abasterr          #+#    #+#             */
/*   Updated: 2023/01/17 19:57:08 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checkformat(char const *str, va_list args, size_t i, int count)
{
	if (str[i + 1] == 'c')
		count += ft_putchar(va_arg(args, int));
	if (str[i + 1] == 's')
		count += ft_putstr(va_arg(args, char *));
	if (str[i + 1] == 'p')
		count += ft_ptr_hex(va_arg(args, void *), HEX_LOWER);
	if (str[i + 1] == 'd' || str[i + 1] == 'i')
		count += ft_putnbr_base(va_arg(args, int), DECIMAL);
	if (str[i + 1] == 'u')
		count += ft_unputnbr_base(va_arg(args, unsigned int), DECIMAL);
	if (str[i + 1] == 'x')
		count += ft_unputnbr_base(va_arg(args, unsigned int), HEX_LOWER);
	if (str[i + 1] == 'X')
		count += ft_unputnbr_base(va_arg(args, unsigned int), HEX_UPPER);
	if (str[i + 1] == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printstr(char const *str, va_list args)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			count = ft_checkformat(str, args, i, count);
			i++;
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	return (count);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		count;

	if (!str)
		return (0);
	count = 0;
	va_start(args, str);
	count = ft_printstr(str, args);
	va_end(args);
	return (count);
}
