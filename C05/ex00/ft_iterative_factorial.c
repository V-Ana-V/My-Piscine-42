/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:17:53 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/05 16:31:29 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	f;

	f = 1;
	if (nb == 0)
	{
		return (f);
	}
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 1)
	{
		f = f * nb;
		nb--;
	}
	return (f);
}
/*
int	main(void)
{
	int	nb;

	nb = 0;
	printf("The factorial of %d is %d\n", nb, ft_iterative_factorial(nb));
	return (0);
}
*/
