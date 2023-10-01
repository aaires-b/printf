/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 18:19:10 by aaires-b          #+#    #+#             */
/*   Updated: 2023/09/20 22:07:08 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbrbase(unsigned int nbr, char *base)
{
	int	size;

	size = 0;
	if (nbr > 15)
	{
		size += ft_putnbrbase(nbr / 16, base);
		size += ft_putnbrbase(nbr % 16, base);
	}
	else if (nbr < 10)
		size += ft_putchar(nbr + 48);
	else
		size += ft_putchar(base[nbr]);
	return (size);
}
