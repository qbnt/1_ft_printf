/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbanet <qbanet@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 21:28:35 by qbanet            #+#    #+#             */
/*   Updated: 2023/02/27 12:13:06 by qbanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

int			ft_printf(const char *str, ...);
int			ft_printstr(char *str);
int			ft_printnbr(int n);
int			ft_printpourcent(void);
int			ft_printunsigned(unsigned int n);
int			ft_printadr(unsigned long long adr);
int			ft_printhexa(int n, const char format);

#endif