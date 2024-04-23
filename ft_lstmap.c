/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgorin <cgorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:05:23 by cgorin            #+#    #+#             */
/*   Updated: 2024/04/23 17:57:54 by cgorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list    *new;
    t_list    *tmp;

    if (!lst ||!f)
        return (NULL);
    new = ft_lstnew((*f)(lst->content));
    if (!new)
        return (NULL);
    tmp = new;
    lst = lst->next;
    while (lst)
    {
        new->next = ft_lstnew((*f)(lst->content));
        if (!new->next)
        {
            ft_lstclear(&tmp, del);
            return (NULL);
        }
        new = new->next;
        lst = lst->next;
    }
    return (tmp);
}
