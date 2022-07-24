/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:13:56 by gmoreira          #+#    #+#             */
/*   Updated: 2022/07/14 05:06:52 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrlen(unsigned long int nbr)
{
	int	count;

	count = 0;
	if (nbr <= 0)
		count++;
	while (nbr)
	{
		nbr = (nbr / 10);
		count++;
	}
	return (count);
}
