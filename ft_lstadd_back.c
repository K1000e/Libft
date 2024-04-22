/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgorin <cgorin@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 20:50:10 by cgorin            #+#    #+#             */
/*   Updated: 2024/04/23 00:03:43 by cgorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *ptr;
	ptr = *lst;
	
	if (!ptr)
		*lst = new;
	while (ptr -> next != NULL) 
		ptr = ptr -> next;
	ptr = new;
}

/* 

	
lst: L’adresse du pointeur vers le premier élément
de la liste.
new: L’adresse du pointeur vers l’élément à
rajouter à la liste.

Ajoute l’élément ’new’ à la fin de la liste. */