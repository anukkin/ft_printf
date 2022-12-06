/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prueba.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:53:32 by abasterr          #+#    #+#             */
/*   Updated: 2022/12/06 12:53:57 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

double	add(int num_args, ...);

int	main(void)
{
	double	x;

	x = add(5, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f);
	printf("%f", x);
	return (0);
}

double	add(int num_args, ...)
{

	double	total;
	int		i;
	va_list	args;

	i = 0;
	total = 0.0f;
	va_start(args, num_args);
	while (i < num_args)
	{
		total = total + va_arg(args, double);
		i++;
	}
	va_end(args);
	return (total);
}