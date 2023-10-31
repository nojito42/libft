/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoulin <jmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 23:45:34 by nojito            #+#    #+#             */
/*   Updated: 2023/10/30 00:37:06 by jmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	copy_len;

	src_len = ft_strlen(src);
	if (dstsize > 0)
	{
		copy_len = dstsize - 1;
		if (copy_len > src_len)
		{
			copy_len = src_len;
		}
		ft_memcpy(dst, src, copy_len);
		dst[copy_len] = '\0';
	}
	return (src_len);
}
