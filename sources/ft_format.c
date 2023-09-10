/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 18:20:17 by aaires-b          #+#    #+#             */
/*   Updated: 2023/09/09 00:21:00 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_format(va_list *argms, char *str, int i)
{
	int		size;

	size = 0;
	if (str[i] == 'c')
		size += ft_putchar(va_arg(*argms, int));
	else if (str[i] == 's')
		size += ft_putstr(va_arg(*argms, char *));
	else if (str[i] == 'p')
		size += ft_putstr("Ox") + ft_putptr(va_arg(*argms, unsigned long int));
	else if (str[i] == 'd')
		size += ft_putnbr(va_arg(*argms, int));
	else if (str[i] == 'i')
		size += ft_putnbr(va_arg(*argms, int));
	else if (str[i] == 'u')
		size += ft_putnbrunsigned(va_arg(*argms, unsigned int));
	else if (str[i] == 'x' )
		size += ft_putnbrbase(va_arg(*argms, int), "0123456789abcdef");
	else if (str[i] == 'X')
		size += ft_putnbrbase(va_arg(*argms, int), "0123456789ABCDEF");
	else if (str[i] == '%')
		size += ft_putchar(va_arg(*argms, int));
	return (size);
}
