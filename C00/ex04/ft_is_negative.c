/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:18:04 by avelikan          #+#    #+#             */
/*   Updated: 2023/10/26 19:44:18 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	s;

	if (n >= 0)
	{
		s = 'P';
	}
	else
	{
		s = 'N';
	}
	write (1, &s, 1);
}
/*
int	main(void)
{
	int	n;

	n = -13;
	ft_is_negative(n);
}
*/
