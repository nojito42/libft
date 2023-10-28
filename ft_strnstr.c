/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nojito <nojito@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 01:27:24 by nojito            #+#    #+#             */
/*   Updated: 2023/10/28 02:19:18 by nojito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	if (ft_strlen(needle) <= ft_strlen(haystack))
	{
		while (i + ft_strlen(needle) <= len && haystack[i])
		{
			if (!ft_strncmp(haystack + i, needle, ft_strlen(needle)))
				return ((char *)(haystack + i));
			i++;
		}
	}
	return (NULL);
}
