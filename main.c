/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:04:26 by abasterr          #+#    #+#             */
/*   Updated: 2023/01/05 14:39:23 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include<stdio.h>

int main()
{
	int i;
	int	a;
	int	*ptr;
	
	i = 0;
	a=10;
	ptr=&a;
	//i = ft_printf("ala%uala%s\n", -1234, "a ver");
	//ft_printf("%d\n", i);
	printf("ala%uala%s\n", -3, "a ver");


}