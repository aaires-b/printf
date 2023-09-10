/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:25:08 by belmonte          #+#    #+#             */
/*   Updated: 2023/09/09 00:22:27 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(char *str, ...)
{
	int		i;
	int		size; 
	va_list	argms;

	va_start(argms, str);
	size = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			size += ft_format(&argms, str, i);
		}
		else
		{
			size++;
			write(1, &str[i], 1);
		}
		i++;
	}
	return (size);
}

/*int main()
{
	char str[] = "";
	int n = -55;
	
	ft_printf("%s\n", str);
	ft_printf("%i\n", n);
	ft_printf("%d\n", n);
	ft_printf("%u\n", n);
	ft_printf("%p\n", str);
	ft_printf("%x\n", n);
	ft_printf("%X\n", n);
	printf("%s\n", str);
	printf("%i\n", n);
	printf("%d\n", n);
	printf("%u\n", n);
	printf("%p\n", str);
	printf("%x\n", n);
	printf("%X\n", n);
}*/