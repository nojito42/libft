/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nojito <nojito@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 23:55:47 by nojito            #+#    #+#             */
/*   Updated: 2023/10/27 00:22:52 by nojito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t strlcat(char *dst, const char *src, size_t dstsize)
{
    if (ft_strlen(dst) == dstsize)
    {
        size_t offset = 0;
        if (ft_strlen(src) < ft_strlen(dst) + dstsize)
            offset = ft_strlen(src) + 1;
        else
        {
            offset = dstsize - ft_strlen(dst) - 1;
            dst[dstsize - 1] = '\0';
        }

        ft_memcpy(dst + ft_strlen(dst), src, offset);
    }

    return ft_strlen(dst) + dstsize;
}