/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoulin <jmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 21:45:51 by jmoulin           #+#    #+#             */
/*   Updated: 2023/10/29 22:21:04 by jmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*trimmed;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_memchr(set, s1[start], ft_strlen(set)))
		start++;
	while (end > start && ft_memchr(set, s1[end], ft_strlen(set)))
		end--;
	if (end - start + 1 <= 0)
		return (ft_strdup(""));
	trimmed = (char *)malloc(end - start + 1 + 1);
	if (!trimmed)
		return (NULL);
	ft_memcpy(trimmed, s1 + start, end - start + 1);
	trimmed[end - start + 1] = '\0';
	return (trimmed);
}
