/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:33:55 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/06 11:58:02 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	check_divisors(int nb, int divisor)
{
	if (divisor == nb)
	{
		return (1);
	}
	if ((nb % divisor) == 0)
	{
		return (0);
	}
	else
	{
		return (check_divisors(nb, divisor + 1));
	}
}

int	ft_is_prime(int nb)
{
	if (nb < 2)
	{
		return (0);
	}
	return (check_divisors(nb, 2));
}
/*
int	main(void)
{
	int	n;

	n = 0;
	while (n < 14)
	{
		printf("for %d ft_is_prime returns %d\n", n, ft_is_prime(n));
		n++;
	}
	return (0);
}
*/
