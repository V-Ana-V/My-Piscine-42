/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:01:55 by avelikan          #+#    #+#             */
/*   Updated: 2023/10/29 16:17:28 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	keeper;

	keeper = *a;
	*a = *b;
	*b = keeper;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	printf("Value of a is %d and value of b is %d\n", a, b);
	ft_swap(&a, &b);
	printf("Value of a is %d and value of b is %d\n", a, b);
	return (0);
}
*/
