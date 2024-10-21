/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivar <ivar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 00:17:23 by ivar              #+#    #+#             */
/*   Updated: 2024/10/21 00:17:24 by ivar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	content = f(lst->content);
	new = ft_lstnew(content);
	if (new == NULL)
	{
		del(content);
		return (NULL);
	}
	new->next = ft_lstmap(lst->next, f, del);
	if (!new->next && lst->next)
	{
		ft_lstclear(&new, del);
		return (NULL);
	}
	return (new);
}
