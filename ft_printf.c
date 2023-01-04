/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:53:32 by abasterr          #+#    #+#             */
/*   Updated: 2023/01/04 13:42:41 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;

	if (!str)
		return (0);

	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
				ft_putchar(va_arg(args, int));
			if (str[i] == 's')
				ft_putstr(va_arg(args, char *));
			//if (str[i] == 'p')
				
			if (str[i] == 'd' || str[i] == 'i')
				ft_putnbr(va_arg(args, int));
			if (str[i] == 'u')
				
			if (str[i] == 'x')
				
			if (str[i] == 'X')
				
			if (str[i] == '%')
				ft_putchar('%');
		}
		else
			ft_putchar(str[i]);
		i++;
	}

	va_end(args);
	return (0);
}
