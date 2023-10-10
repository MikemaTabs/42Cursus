/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:55:21 by fbascuna          #+#    #+#             */
/*   Updated: 2023/10/10 13:55:39 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lstptr;

	while (*lst)
	{
		del((*lst)->content);
		lstptr = *lst;
		*lst = lstptr->next;
		free(lstptr);
	}
	*lst = NULL;
}
