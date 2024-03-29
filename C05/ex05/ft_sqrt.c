/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:03:18 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/08 17:40:05 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	x1;
	int	x2;
	int	m;

	if (nb < 0)
		return (0);
	x1 = 1;
	x2 = nb;
	while (x1 <= x2)
	{
		m = x1 + ((x2 - x1) / 2);
		if (m == nb / m && nb % m == 0)
			return (m);
		if (m <= nb / m)
			x1 = m + 1;
		else
			x2 = m - 1;
	}
	return (0);
}
/*
int	main(void)
{
	int	nb;

	nb = 0;
	while (nb < 101)
	{
		printf("For nb =  %d ft_sqrt returns %d\n", nb, ft_sqrt(nb));
		nb++;
	}
	return (0);
}
*/
