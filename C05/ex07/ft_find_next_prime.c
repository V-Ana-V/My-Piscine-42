/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:16:22 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/08 13:28:42 by avelikan         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	n;

	n = nb;
	{
		while (!(ft_is_prime(n)))
			n++;
		return (n);
	}
}
/*
int	main(void)
{
	printf("Next prime is %d\n", ft_find_next_prime(2147483645));
	return (0);
}
*/
