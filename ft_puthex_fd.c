/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:56:04 by gmoreira          #+#    #+#             */
/*   Updated: 2022/07/20 01:55:20 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_fd(unsigned long int adress)
{
	int	count;

	if (!adress)
	{
		return (ft_putstr_fd("(nil)", 1));
	}
	ft_putstr_fd("0x", 1);
	count = ft_puthexlower((unsigned long int)adress) + 2;
	return (count);
}
