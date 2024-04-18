/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgorin <cgorin@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 19:06:03 by cgorin            #+#    #+#             */
/*   Updated: 2024/04/16 14:18:38 by cgorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_BONUS_H
# define LIBFT_BONUS_H

# include "libft.h"

typedef struct
{
	void	*content;
	struct s_list	*next;
	
}	t_list;

//Fonctions bonus

t_list *ft_lstnew(void *content);

#endif