/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:57:01 by fbascuna          #+#    #+#             */
/*   Updated: 2023/10/10 13:57:33 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlist;
	t_list	*ptr;

	if (!lst)
		return (NULL);
	nlist = 0;
	while (lst)
	{
		ptr = ft_lstnew(f(lst->content));
		if (ptr)
		{
			ft_lstadd_back(&nlist, ptr);
			lst = lst->next;
		}
		else
		{
			ft_lstclear(&ptr, del);
			return (0);
		}
	}
	return (nlist);
}
