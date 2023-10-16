/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:57:01 by fbascuna          #+#    #+#             */
/*   Updated: 2023/10/16 15:25:37 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*free_stuff(void **content, t_list **lst, void (*del)(void *))
{
	del((*content));
	ft_lstclear(lst, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*original_lst;
	t_list	*new_lst_item;
	t_list	*new_list;
	void	*new_content;

	if (lst == NULL)
		return (NULL);
	original_lst = lst;
	new_list = NULL;
	while (lst != NULL)
	{
		new_content = f(lst->content);
		if (new_content == NULL)
			return (free_stuff(&new_content, &new_list, del));
		new_lst_item = ft_lstnew(new_content);
		if (new_lst_item == NULL)
			return (free_stuff(&new_content, &new_list, del));
		ft_lstadd_back(&new_list, new_lst_item);
		lst = lst->next;
	}
	return (new_list);
}
