/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anabelmonte <anabelmonte@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 18:18:38 by aaires-b          #+#    #+#             */
/*   Updated: 2023/09/10 16:48:14 by anabelmonte      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
