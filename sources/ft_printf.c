/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:25:08 by belmonte          #+#    #+#             */
/*   Updated: 2023/09/16 17:02:45 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
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
	va_end(argms);
	return (size);
}

/*int main()
{
	char *str = "ana";
	//int n = -10;
	
	//ft_printf("%s", (char *)NULL);
	//ft_printf("%d\n", ft_printf("%i\n", -10));
	//ft_printf("%d\n", -200000);
	//ft_printf("%u\n", n);
	ft_printf("%p\n", str);
	//ft_printf("%x\n", n);
	//ft_printf("%X\n", n);
	//ft_printf("%%\n");
	//printf("ola %s ola\n", str);
	//printf("%d\n", printf("%i\n", -10));
	//printf("%d\n", -200000);
	//printf("%u\n", n);
	//printf("%p\n", str);
	//printf("%x\n", n);
	//printf("%X\n", n);
	//printf("%%\n");
	//printf("%s", (char *)NULL);
}
*/