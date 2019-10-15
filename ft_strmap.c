/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkudoiar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 18:03:50 by dkudoiar          #+#    #+#             */
/*   Updated: 2019/10/07 16:30:57 by dkudoiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*src;
	char	*dst;
	char	*result;

	if (!s || !(result = ft_memalloc((size_t)(ft_strlen((char*)s) + 1))))
		return (NULL);
	src = (char*)s;
	dst = result;
	while (*src)
		*(dst++) = f(*(src++));
	return (result);
}
