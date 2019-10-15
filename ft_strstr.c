/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkudoiar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 16:00:02 by dkudoiar          #+#    #+#             */
/*   Updated: 2019/10/10 20:07:40 by dkudoiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *find_str)
{
	int i;
	int j;

	i = 0;
	if (*find_str == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == find_str[j])
		{
			j++;
			if (find_str[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
