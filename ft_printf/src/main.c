/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angagnie <angagnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 19:15:32 by angagnie          #+#    #+#             */
/*   Updated: 2016/11/30 15:52:09 by angagnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>

int		main(int ac, char **av)
{
	char const	*s = "(%.-020i,%#x,%-20s,%ls)\n";

	(void)ac;
	(void)av;
	printf(s, '*', 0xDEADBEEF, "Real Printf", "Helloλ\0");
	ft_printf(s, '*', 0xDEADBEEF, "My   Printf", "Helloλ\0");
	return (0);
}
