/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/11 11:18:48 by hkaddour          #+#    #+#             */
/*   Updated: 2015/07/12 21:04:16 by angagnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void print_char02(int ligne, int colonne, int x, int y)
{
	if (ligne == 0 && (colonne == 0 || colonne == x - 1))
		ft_putchar('A');
	else if (ligne == y - 1 && (colonne == 0 || colonne == x - 1))
		ft_putchar('C');
	else if (ligne == 0 || ligne == y - 1 || colonne == 0 || colonne == x - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}
