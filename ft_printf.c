/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  vguidoni <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:51:50 by  vguidoni         #+#    #+#             */
/*   Updated: 2022/10/17 15:52:04 by  vguidoni        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		c;
	va_list	list;

	va_start (list, format);
	c = 0;
	while (*format)
	{
		if (*format == '%')
		{
			c = c + ft_ricercha_arg(list, format + 1);
			format = format + 2;
		}
		else
		{
			c = c + ft_lettura(format, *format);
			format++;
		}
		if (format == NULL)
			return (c);
	}
	va_end(list);
	return (c);
}


int main(void){
	int i = 27;
	char *c = "Rotkiv97";

	ft_printf("\033[33m%s \033[0mha \033[31m%d \033[0manni\n", c, i);
	return 0;
}