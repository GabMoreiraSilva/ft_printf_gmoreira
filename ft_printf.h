/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 22:47:44 by gmoreira          #+#    #+#             */
/*   Updated: 2022/07/17 01:35:54 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putchar_fd(char c, int fd);
int	ft_putstr_fd(char *s, int fd);
int	ft_nbrlen(unsigned long int nbr);
int	ft_putnbr_fd(int nb, int fd);
int	ft_put_nbrun(unsigned int nbr);
int	ft_puthex_fd(unsigned long int adress);
int	ft_puthexlower(unsigned long int adress);
int	ft_puthexupper(unsigned long int adress);

#endif