/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-yaqi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 01:28:44 by yel-yaqi          #+#    #+#             */
/*   Updated: 2023/07/20 01:39:49 by yel-yaqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = argc;
	i = 0;
	write(1, ".", 1);
	argc = '\n';
	while (argv[0][++i])
	{
		write(1, &argv[0][i], 1);
	}
	write(1, &argc, 1);
}
