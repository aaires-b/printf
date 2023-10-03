/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 18:19:36 by aaires-b          #+#    #+#             */
/*   Updated: 2023/10/03 23:20:48 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_helper(unsigned long int ptr)
{
	int		size;
	char	*x;

	size = 0;
	x = "0123456789abcdef";
	if (ptr > 15)
	{
		size += ft_helper(ptr / 16);
		size += ft_helper(ptr % 16);
	}
	else 
		size += ft_putchar(x[ptr]);
	return (size);
}

int	ft_putptr(unsigned long int ptr)
{
	int		size;

	size = 0;
	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		size = 5;
	}
	else 
	{
		write(1, "0x", 2);
		size += 2;
		size += ft_helper(ptr);
	}
	return (size);
}
