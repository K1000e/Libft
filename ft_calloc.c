/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgorin <cgorin@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 19:13:36 by cgorin            #+#    #+#             */
/*   Updated: 2024/03/31 20:22:32 by cgorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*buffer;

	buffer = 0;
	if (size == 0 || count == 0)
		return (NULL);
	buffer = (void *) malloc(size * count);
	if (buffer == NULL)
		return (NULL);
	ft_bzero(buffer, count);
	return (buffer);
}

/* The calloc() function contiguously allocates enough space for count
     objects that are size bytes of memory each and returns a pointer to the
     allocated memory.  The allocated memory is filled with bytes of value
     zero.

	 RETURN VALUES
     If successful, calloc(), malloc(), realloc(), reallocf(), valloc(), and
     aligned_alloc() functions return a pointer to allocated memory.  If
     there is an error, they return a NULL pointer and set errno to ENOMEM
 */