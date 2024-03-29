/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkudoiar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 21:08:01 by dkudoiar          #+#    #+#             */
/*   Updated: 2019/10/09 21:14:24 by dkudoiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = s;
	while (n > 0)
	{
		*ptr = '\0';
		ptr++;
		n--;
	}
}
