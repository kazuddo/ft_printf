/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tmp.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdodo <kdodo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:16:36 by kdodo             #+#    #+#             */
/*   Updated: 2023/09/28 16:37:12 by kdodo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_char(va_list ap)
{
	char	c;
	
	c = (char)va_arg(ap, int);
	write (1, &c, 1);
}

int	ft_test_printf(const char *fmt, ...)
{
	va_list	ap;
	size_t	i;
	int		n;

	i = 0;
	va_start(ap, fmt);
	if (fmt == NULL)
		n = -1;
	while (fmt[i] && n >= 0)
	{
		if (fmt[i] == '%')
		{
			ft_print_char(ap);
			i++;
		}
		else 
			n += write (1, &fmt[i], 1);
		i++;
	}
	va_end(ap);
	return (n);
}

int main()
{
	ft_test_printf("aaa%s", 'b');
	return (0);
}