/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:59:41 by abasterr          #+#    #+#             */
/*   Updated: 2023/01/17 19:51:47 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdarg.h>

int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_putnbr_base(int nbr, char *base);
size_t	ft_strlen(const char *s);
int		ft_unputnbr_base(unsigned long nbr, char *base);
int		ft_ptr_hex(void *ptr, char *base);

#endif