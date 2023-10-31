/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoulin <jmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 20:55:39 by jmoulin           #+#    #+#             */
/*   Updated: 2023/10/29 21:10:10 by jmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buff;

	buff = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!buff)
		return (buff);
	ft_memcpy(buff, s1, ft_strlen(s1));
	ft_memcpy(buff + ft_strlen(s1), s2, ft_strlen(s2));
	buff[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (buff);
}
