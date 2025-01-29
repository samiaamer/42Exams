/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabutale <sabutale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 19:18:47 by sabutale          #+#    #+#             */
/*   Updated: 2025/01/29 19:18:48 by sabutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                argv[1][i] = argv[1][i] - 32;
                write (1, &argv[1][i], 1);
            }
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                argv[1][i] = argv[1][i] + 32;
                write (1, &argv[1][i], 1);
            }
            i++;
        }
        
    }
    write (1, "\n", 1);
    return (0);
}