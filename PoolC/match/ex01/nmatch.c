/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angagnie <angagnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/19 23:03:25 by angagnie          #+#    #+#             */
/*   Updated: 2015/07/19 23:19:18 by angagnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		aux(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*s1 != 0)
			return (aux(s1 + 1, s2) + aux(s1, s2 + 1));
		else
			return (aux(s1, s2 + 1));
	}
	if (*s1 == *s2)
	{
		if (*s1 != 0)
			return (aux(s1 + 1, s2 + 1));
		else
			return (1);
	}
	return (0);
}
