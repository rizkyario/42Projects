/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c										:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angagnie <angagnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:57:35 by angagnie          #+#    #+#             */
/*   Updated: 2015/11/25 17:03:55 by angagnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

void	test_toupper(int (*ft)(int c))
{
	char const tests[] = {
		'a',
		'A',
		'w',
		'W',
		-65,
		127,
		-128,
		'0'
	};

	for (unsigned int i = 0 ; i < SIZE_ARRAY(tests) ; i++)
	{
		if (toupper(tests[i]) == ft(tests[i]))
			printf(GREEN);
		else
			printf(RED);
		printf(".");
	}
	printf(END);
}