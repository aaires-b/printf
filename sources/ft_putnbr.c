/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 18:18:38 by aaires-b          #+#    #+#             */
/*   Updated: 2023/09/20 22:07:04 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr(int nbr)
{
	int	size;

	size = 0;
	if (nbr == -2147483648)
	{
		size += ft_putchar('-');
		size += ft_putchar('2');
		size += ft_putnbr(147483648);
	}
	else if (nbr < 0)
	{
		size += ft_putchar('-');
		nbr = -nbr;
		size += ft_putnbr(nbr);
	}
	else if (nbr > 9)
	{
		size += ft_putnbr(nbr / 10);
		size += ft_putnbr(nbr % 10);
	}
	else 
		size += ft_putchar(nbr + 48);
	return (size);
}
