/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masik <masik@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 20:42:13 by masik             #+#    #+#             */
/*   Updated: 2026/08/05 23:11:29 by masik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*str;
	unsigned char		*ptr;
	int					i;

	if (!dst && !src)
		return (dst);
	str = (const unsigned char *) src;
	ptr = (unsigned char *) dst;
	i = 0;
	while (i < n)
	{
		ptr[i] = str[i];
		i++;
	}
	return (dst);
}
