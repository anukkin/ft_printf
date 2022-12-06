/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prueba3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:40:11 by abasterr          #+#    #+#             */
/*   Updated: 2022/12/06 12:50:46 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

double	vadd(int num_args, va_list args)
{
	double	valor;
	int		i;

	i = 0;
	valor = 0.0f;
	while (i < num_args)
	{
		valor = valor + va_arg (args, double);
		i++;
	}
	return (valor);
}

double	front_add(int num_args, ...)
{
	va_list args;
	va_start (args, num_args);
	double total;

	total = vadd(num_args, args);
	va_end (args);
	return total;
}

int	main(void)
{
	double	x;

	x = front_add(5, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f);
	printf("%f", x);
	return (0);
}