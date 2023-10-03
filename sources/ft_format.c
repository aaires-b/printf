/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 18:20:17 by aaires-b          #+#    #+#             */
/*   Updated: 2023/10/03 23:09:34 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_format(va_list *argms, const char *str, int i)
{
	int		size;

	size = 0;
	if (str[i] == 'c')
		size += ft_putchar(va_arg(*argms, int));
	else if (str[i] == 's')
		size += ft_putstr(va_arg(*argms, char *));
	else if (str[i] == 'p')
		size += ft_putptr(va_arg(*argms, unsigned long int));
	else if (str[i] == 'd' || str[i] == 'i')
		size += ft_putnbr(va_arg(*argms, int));
	else if (str[i] == 'u')
		size += ft_putnbrunsigned(va_arg(*argms, unsigned int));
	else if (str[i] == 'x' )
		size += ft_putnbrbase(va_arg(*argms, int), "0123456789abcdef");
	else if (str[i] == 'X')
		size += ft_putnbrbase(va_arg(*argms, int), "0123456789ABCDEF");
	else if (str[i] == '%')
		size += ft_putchar('%');
	return (size);
}
