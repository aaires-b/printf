/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrunsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 19:01:33 by aaires-b          #+#    #+#             */
/*   Updated: 2023/09/09 00:23:22 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

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
