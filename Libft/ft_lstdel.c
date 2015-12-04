/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angagnie <angagnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:21:50 by angagnie          #+#    #+#             */
/*   Updated: 2015/12/04 16:40:44 by angagnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list **ptr;

	ptr = alst;
	while ((*ptr = (*ptr)->next) != NULL)
	{
		ft_lstdelone(alst, del);
		*alst = NULL;
		alst = ptr;
	}
}