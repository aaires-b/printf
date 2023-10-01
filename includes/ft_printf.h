/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anabelmonte <anabelmonte@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 18:23:45 by aaires-b          #+#    #+#             */
/*   Updated: 2023/09/10 16:51:25 by anabelmonte      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_format(va_list *argms, const char *str, int i);
int	ft_putnbrbase(unsigned int nbr, char *base);
int	ft_putnbr(int nbr);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_putptr(unsigned long int ptr);
int	ft_putnbrunsigned(unsigned int nbr);

#endif