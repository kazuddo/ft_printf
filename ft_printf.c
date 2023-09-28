/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdodo <kdodo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:53:54 by kdodo             #+#    #+#             */
/*   Updated: 2023/09/28 16:15:58 by kdodo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *fmt, ...)
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
			// check %
		else 
			// print
		i++;
	}
	va_end(ap);
	return (n);
}