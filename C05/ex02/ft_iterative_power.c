/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:38:47 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/05 16:58:25 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	r;

	i = 0;
	r = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (i < power)
	{
		r *= nb;
		i++;
	}
	return (r);
}
/*
int	main(void)
{
	int	nb;
	int	power;

	nb = 9;
	power = 0;
	printf("%d in the power of %d is %d\n",
		nb, power, ft_iterative_power(nb, power));
	return (0);
}
*/
