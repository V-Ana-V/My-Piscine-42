/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:01:05 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/05 16:40:31 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	if (nb < 0)
	{
		return (0);
	}
	factorial = 1;
	if (nb > 1)
	{
		factorial = nb * ft_recursive_factorial(nb - 1);
	}
	return (factorial);
}
/*
int	main(void)
{
	int	nb;

	nb = 1;
	printf("The factorial of %d is %d\n", nb, ft_recursive_factorial(nb));
	return (0);
}
*/
