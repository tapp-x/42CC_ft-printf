/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libftp.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tappourc <tappourc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:01:24 by tappourc          #+#    #+#             */
/*   Updated: 2023/11/25 10:01:28 by tappourc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFTP_H
# define FT_LIBFTP_H

# include <unistd.h>
# include <stdlib.h>
# include "./libft/libft.h"
# include "stdarg.h"

int		ft_printf(const char *s, ...);
int		print_hex_up(unsigned int nb);
int		print_hex_low(unsigned int nb);
int		print_hex_ptr(unsigned long int nb);
int		print_hex(unsigned long int nb, char choice);
int		ft_putchar(int c);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
int		ft_putnbr_unsigned(unsigned int n);
int		ft_match_format(va_list ap, char c);

#endif
