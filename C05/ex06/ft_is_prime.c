/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:33:55 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/08 13:15:30 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	x;

	if (nb < 2)
	{
		return (0);
	}
	x = 2;
	while (x <= nb / x)
	{
		if (nb % x == 0)
			return (0);
		x++;
	}
	return (1);
}
/*
int	main(void)
{
	int	n;

	n = 0;
	while (n < 20)
	{
		printf("for the number (%d)"
			"ft_is_prime returns (%d)\n", n, ft_is_prime(n));
		n++;
	}
	printf("for 2147483647 we have %d\n", ft_is_prime(2147483647));
	return (0);
}
*/
