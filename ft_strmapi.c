/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 13:00:46 by alambert          #+#    #+#             */
/*   Updated: 2022/02/14 15:25:15 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dup;
	char	*ptr;

	if (!s || !f)
		return (NULL);
	dup = ft_strdup(s);
	ptr = dup;
	if (dup == NULL)
		return (NULL);
	while (*ptr)
	{
		*ptr = f(ptr - dup, *ptr);
		ptr++;
	}
	return (dup);
}
