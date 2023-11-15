/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 11:43:06 by avelikan          #+#    #+#             */
/*   Updated: 2023/10/28 17:56:12 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);

void	print_line(int x, char left_edge, char middle, char right_edge)
{
	int	i;

	if (x < 1) 
	{
		write(1, "Error: x and y must be 1 or greater.\n", 37);
		exit(1);
	}
	ft_putchar(left_edge);
	i = 1;
	while (i < (x - 1))
	{
		ft_putchar(middle);
		i++;
	}
	if (x > 1)
	{
		ft_putchar(right_edge);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	j;

	if (y < 1) 
	{
		write(1, "Error: x and y must be 1 or greater.\n", 37);
		exit(1);
	}
	print_line(x, 'A', 'B', 'C');
	j = 1;
	while (j < (y - 1))
	{
		print_line(x, 'B', ' ', 'B');
		j ++;
	}
	if (y > 1)
	{
		print_line(x, 'A', 'B', 'C');
	}
}
