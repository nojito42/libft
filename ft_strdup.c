/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoulin <jmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:15:00 by jmoulin           #+#    #+#             */
/*   Updated: 2023/10/29 17:54:43 by jmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	s;

	s = ft_strlen(s1) + 1;
	copy = malloc(s);
	if (copy == NULL)
		return (NULL);
	copy[s - 1] = '\0';
	return (ft_memcpy(copy, s1, s));
}
