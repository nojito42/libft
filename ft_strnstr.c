/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoulin <jmoulin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:11:05 by jmoulin           #+#    #+#             */
/*   Updated: 2023/11/01 18:11:05 by jmoulin          ###   ########.ch       */
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
