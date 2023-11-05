/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:02:33 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/04 19:59:42 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	print_digit(unsigned int digit)
{
	char	c;

	c = digit + 48;
	write(1, &c, 1);
}

unsigned int	ndigit(int nb)
{
	int	q;
	int	n;

	if (nb == 0)
	{
		n = 1;
		return (n);
	}
	q = nb;
	n = 0;
	while (q != 0)
	{
		n++;
		q = q / 10;
	}
	return (n);
}

unsigned int	power(unsigned int n)
{
	unsigned int	i;
	unsigned int	p;

	i = 0;
	p = 1;
	while (i < n)
	{
		p = p * 10;
		i++;
	}
	return (p);
}

void	ft_putnbr(int nb)
{
	unsigned int	i;
	unsigned int	q;
	unsigned int	nmd;
	unsigned int	m;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * (-1);
	}
	q = nb;
	nmd = ndigit(nb);
	i = 1;
	while (i <= nmd)
	{
		m = q / power(nmd - i);
		print_digit(m);
		q = q - (power(nmd - i) * m);
		i++;
	}
}
/*
int	main(void)
{
	ft_putnbr(0);
	return (0);
}
*/
