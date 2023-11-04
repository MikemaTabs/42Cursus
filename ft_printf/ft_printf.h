/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:46:42 by fbascuna          #+#    #+#             */
/*   Updated: 2023/11/04 20:14:39 by fbascuna         ###   ########.fr       */
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

#endif