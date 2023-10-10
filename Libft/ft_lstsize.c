/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:51:50 by fbascuna          #+#    #+#             */
/*   Updated: 2023/10/10 13:52:13 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		cont;
	t_list	*lstptr;

	if (!lst)
		return (0);
	cont = 1;
	lstptr = lst;
	while (lstptr->next)
	{
		cont++;
		lstptr = lstptr->next;
	}
	return (cont);
}
