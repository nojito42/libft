/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nojito <nojito@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 23:45:34 by nojito            #+#    #+#             */
/*   Updated: 2023/10/26 23:55:08 by nojito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t strlcpy(char *dst, const char *src, size_t dstsize)
{
    if (ft_strlen(src) + 1 < dstsize)
        ft_memcpy(dst, src, dstsize);
    else if (dstsize != 0)
        ft_memcpy(dst, src, dstsize);

    return ft_strlen(src);
}