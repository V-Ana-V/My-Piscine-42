/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:25:57 by avelikan          #+#    #+#             */
/*   Updated: 2023/10/27 17:17:25 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	comb[3];

	comb[0] = '0';
	comb[1] = '1';
	comb[2] = '2';
	while (comb[0] < '7')
	{
		while (comb[1] <= '8')
		{
			while (comb[2] <= '9')
			{
				write(1, &comb[0], 1);
				write(1, &comb[1], 1);
				write(1, &comb[2], 1);
				write(1, ", ", 2);
				comb[2] += 1;
			}
			comb[1] += 1;
			comb[2] = comb[1] + 1;
		}
		comb[0] += 1;
		comb[1] = comb[0] + 1;
		comb[2] = comb[1] + 1;
	}
	write (1, "789\n", 4);
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
