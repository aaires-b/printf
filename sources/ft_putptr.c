/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 18:19:36 by aaires-b          #+#    #+#             */
/*   Updated: 2023/09/09 00:21:30 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putptr(unsigned long int ptr)
{
	int		size;
	char	*x;

	size = 0;
	x = "0123456789abcdef";
	if (ptr > 15)
	{
		size += ft_putptr(ptr / 16);
		size += ft_putptr(ptr % 16);
	}
	else 
		size += ft_putchar(x[ptr]);
	return (size);
}
