/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgorin <cgorin@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:51:46 by cgorin            #+#    #+#             */
/*   Updated: 2024/04/16 14:18:25 by cgorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list *ft_lstnew(void *content)
{
	t_list *list;
	list = NULL;
	list = malloc (sizeof(t_list));
	list -> content = content;
	list -> next = NULL;
	return list;
}