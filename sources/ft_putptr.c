/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anabelmonte <anabelmonte@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 18:19:36 by aaires-b          #+#    #+#             */
/*   Updated: 2023/09/10 16:48:30 by anabelmonte      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
