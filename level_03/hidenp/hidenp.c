/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samia <samia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:20:15 by sabutale          #+#    #+#             */
/*   Updated: 2025/02/09 08:37:36 by samia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int len = 0;
	int i = 0;
	int j = 0;
	if (argc == 3)
	{
		while (argv[1][len])
			len++;
		while (argv[1][i] && argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
				i++;
			j++;
		}
		if (i == len)
			write (1, "1", 1);
		else
			write (1, "0", 1);
	}
	write (1, "\n", 1);
	return (0);
}