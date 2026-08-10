/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memmove.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: masik <masik@student.42istanbul.com.tr>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/08/05 21:55:52 by masik            #+#    #+#              */
/*   Updated: 2026/08/07 17:34:00 by masik           ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*str;
	unsigned char		*ptr;

	ptr = (unsigned char *) dst;
	str = (const unsigned char *) src;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (len > 0)
		{
			len--;
			ptr[len] = str[len];
		}
		return (dst);
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
