/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angagnie <angagnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/21 22:39:01 by angagnie          #+#    #+#             */
/*   Updated: 2015/07/22 01:19:35 by angagnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	my_swap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		done;
	int		i;

	done = 0;
	while (!done)
	{
		done = 1;
		i = 0;
		while (tab[++i])
			if (cmp(tab[i - 1], tab[i]) > 0)
			{
				my_swap(tab + i - 1, tab + i);
				done = 0;
			}
	}
}
