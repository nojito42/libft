/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoulin <jmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 14:54:06 by jmoulin           #+#    #+#             */
/*   Updated: 2023/10/29 17:51:41 by jmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*allocatedmem;

	allocatedmem = malloc(size * count);
	if (allocatedmem == NULL)
		return (NULL);
	if (size > 0)
		ft_memset(allocatedmem, 0, count * size);
	return (allocatedmem);
}
