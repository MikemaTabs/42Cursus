/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:54:03 by fbascuna          #+#    #+#             */
/*   Updated: 2023/11/02 16:56:16 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_arg_s(char *s)
{
	if (!s)
		return (write(1, "(null)", sizeof(char) * 6));
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}
