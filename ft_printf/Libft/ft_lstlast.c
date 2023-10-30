/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:52:36 by fbascuna          #+#    #+#             */
/*   Updated: 2023/10/10 13:53:11 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lstptr;

	if (!lst)
		return (0);
	lstptr = lst;
	while (lstptr ->next)
		lstptr = lstptr->next;
	return (lstptr);
}
