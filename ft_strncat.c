/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkudoiar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 21:48:52 by dkudoiar          #+#    #+#             */
/*   Updated: 2019/10/07 17:26:10 by dkudoiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strncat(char *dst, char *src, size_t n)
{
	size_t i;
	size_t dst_size;

	i = 0;
	dst_size = 0;
	while (dst[dst_size] != '\0')
		dst_size++;
	while (src[i] && i < n)
	{
		dst[dst_size] = src[i];
		dst_size++;
		i++;
	}
	dst[dst_size] = '\0';
	return (dst);
}
