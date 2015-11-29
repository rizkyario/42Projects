/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putstr.c										:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angagnie <angagnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:57:59 by angagnie          #+#    #+#             */
/*   Updated: 2015/11/27 17:14:42 by angagnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

void	test_putstr(void (*ft)(char const * s))
{
	char const * const tests[] = {
		// some char const * values
		"Hello 42",
		"",
		NULL
	};
    int out;
    int p1[2];
    int p2[2];
    char buf1[BUSZ];
    char buf2[BUSZ];

    fflush(stdout);
    bzero(buf1, BUSZ);
    bzero(buf2, BUSZ);
    out = dup(1); // creating a stdout backup
    pipe(p1); // Creating a pipe
    pipe(p2);
    dup2(p1[1], 1); // Moving the pipe for it to read stdout
    for (unsigned int i = 0 ; i < SIZE_ARRAY(tests) ; i++)
    {
		dprintf(p2[1], "%s|", tests[i]);
		ft(tests[i]);
		printf("|");
		fflush(stdout);
    }
    dup2(out, 1); // repairing stdout
    buf1[read(p1[0], buf1, BUSZ - 1)] = 0;
    buf2[read(p2[0], buf2, BUSZ - 1)] = 0;
    close(p1[0]); // closing pipes
    close(p1[1]);
    close(p2[0]);
    close(p2[1]);
    close(out); // we don't need the backup anymore
    MARK(!(strcmp(buf1, buf2)));
	printf(END);
}