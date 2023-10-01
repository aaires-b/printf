/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrunsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 19:01:33 by aaires-b          #+#    #+#             */
/*   Updated: 2023/09/20 22:07:12 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbrunsigned(unsigned int nbr)
{
	int	size;

	size = 0;
	if (nbr > 9)
	{
		size += ft_putnbrunsigned(nbr / 10);
		size += ft_putnbrunsigned(nbr % 10);
	}
	else 
		size += ft_putchar(nbr + 48);
	return (size);
}
