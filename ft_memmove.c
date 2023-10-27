/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nojito <nojito@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:52:10 by nojito            #+#    #+#             */
/*   Updated: 2023/10/26 23:52:02 by nojito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    if (CHECK_MEMOP(dst, src, len))
    {
        char *s;
        char *d;
        size_t c;

        s = (char *)src;
        d = (char *)dst;
        c = 0;

        if (d > s)
            while (len-- > 0)
                d[len] = s[len];
        else
            while (c++ < len)
                d[c] = s[c];
    }
    return (dst);
}