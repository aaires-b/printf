/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 18:23:45 by aaires-b          #+#    #+#             */
/*   Updated: 2023/09/09 00:19:13 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(char *str, ...);
int	ft_format(va_list *argms, char *str, int i);
int	ft_putnbrbase(unsigned int nbr, char *base);
int	ft_putnbr(int nbr);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_putptr(unsigned long int ptr);
int	ft_putnbrunsigned(unsigned int nbr);

#endif