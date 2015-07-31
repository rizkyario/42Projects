/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_djamal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angagnie <angagnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/31 17:35:20 by angagnie          #+#    #+#             */
/*   Updated: 2015/07/31 17:45:45 by angagnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_djamal(int i, int j, int k)
{
	if ((i <= j && j <= k) || (k <= j && j <= i))
		return (j);
	else if ((j <= k && k <= i) || (i <= k && k <= j))
		return (k);
	else
		return (i);
}