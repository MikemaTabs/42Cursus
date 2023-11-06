/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:46:42 by fbascuna          #+#    #+#             */
/*   Updated: 2023/11/06 13:08:20 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include "Libft/libft.h"

int		ft_printf(const char *string, ...);
int		ft_arg_perc(void);
int		ft_arg_c(int c);
int		ft_arg_s(char *s);
int		ft_arg_u(unsigned int nbr);
int		ft_arg_d_i(int c);
void	ft_free_ptr(char **ptr);
int		ft_decimal_len(long int nbr);
int		ft_hex_len(unsigned long nbr);
int		ft_reverse_str(char *str);
char	ft_decimal_to_hex(char digit, char type);
int		ft_arg_p(unsigned long nbr);

#endif