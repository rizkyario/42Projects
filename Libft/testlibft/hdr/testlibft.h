/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testlibft.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angagnie <angagnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:15:32 by angagnie          #+#    #+#             */
/*   Updated: 2015/11/25 21:28:00 by angagnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTLIBFT_H
# define TESTLIBFT_H

# include <stdlib.h>
# include <ctype.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include "libft.h"
# include "colors.h"
# include "macroes.h"

void	test_atoi(int (*ft)(const char *str));
void	test_strlen(size_t (*ft)(const char *str));
void	test_allchar(int (*ft)(int c), int (*ref)(int c));
void	test_putnbr(void (*ft)(int n));

#endif
