/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoulin <jmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 00:26:55 by jmoulin           #+#    #+#             */
/*   Updated: 2023/10/31 00:42:53 by jmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*nstr;
	size_t	i;

	nstr = ft_strdup(s);
	if (!nstr)
		return (nstr);
	i = 0;
	while (nstr[i])
	{
		nstr[i] = (*f)(i, nstr[i]);
		i++;
	}
	return (nstr);
}
