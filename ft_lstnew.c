/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgorin <cgorin@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:51:46 by cgorin            #+#    #+#             */
/*   Updated: 2024/04/18 20:26:38 by cgorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = NULL;
	lst = malloc (sizeof(t_list));
	if (lst == NULL)
		return (NULL);
	lst -> content = content;
	lst -> next = NULL;
	return (lst);
}
