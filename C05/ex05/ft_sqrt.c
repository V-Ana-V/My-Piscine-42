/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:03:18 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/06 11:33:10 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	check(int nb, int candidate)
{
	if ((candidate * candidate) > nb)
	{
		return (0);
	}
	if ((candidate * candidate) == nb)
	{
		return (candidate);
	}
	else
	{
		return (check(nb, candidate + 1));
	}
}

int	ft_sqrt(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	return (check(nb, 1));
}
/*
int	main(void)
{
	int	nb;

	nb = 121;
	printf("For nb =  %d ft_sqrt returns %d\n", nb, ft_sqrt(nb));
	return (0);
}
*/
