/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nojito <nojito@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:52:10 by nojito            #+#    #+#             */
/*   Updated: 2023/10/27 21:28:44 by nojito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!(dst == src || len == 0))
	{
		if (dst > src && dst - src < (int)len)
			while (len-- > 0)
				((char *)dst)[len] = ((char *)src)[len];
		else if (src > dst && src - dst < (int)len)
		{
			i = 0;
			while (i < len)
			{
				((char *)dst)[i] = ((char *)src)[i];
				i++;
			}
		}
		else
			ft_memcpy(dst, src, len);
	}
	return (dst);
}
