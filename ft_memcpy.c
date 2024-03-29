/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:55:34 by zjaddad           #+#    #+#             */
/*   Updated: 2022/10/27 20:24:14 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*serc;
	size_t	i;

	i = 0;
	dest = (char *)dst;
	serc = (char *)src;
	if (!dest && !serc)
		return (NULL);
	if (src == dst)
		return (dest);
	while (i < n)
	{
		dest[i] = serc[i];
		i++;
	}
	return (dest);
}
