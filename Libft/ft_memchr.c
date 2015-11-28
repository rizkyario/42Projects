/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angagnie <angagnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 12:19:42 by angagnie          #+#    #+#             */
/*   Updated: 2015/11/28 09:26:05 by angagnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*p;

	p = s;
	while (n-- > 0 && *p != '\0' && *p != (unsigned char)c)
		++p;
	return (*p == '\0' ? NULL : (void *)p);
}
