/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:42:49 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/06 12:15:05 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac > 0)
	{
		while (**av)
		{
			write(1, *av, 1);
			(*av)++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
