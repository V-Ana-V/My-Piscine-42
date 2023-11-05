/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 12:34:18 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/05 13:36:46 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ws_pass(char *str)
{
	while ((*str == 32) || ((*str >= 9) && (*str <= 13)))
	{
		str++;
	}
	return (str);
}

int	is_digit(char c)
{
	int	n;

	if ((c >= '0') && (c <= '9'))
	{
		n = c - 48;
		return (n);
	}
	else
	{
		return (-1);
	}
}

int	ft_atoi(char *str)
{
	int	counter;
	int	number;

	counter = 1;
	number = 0;
	str = ws_pass(str);
	while ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
		{
			counter = -counter;
		}
		str++;
	}
	while (is_digit(*str) > -1)
	{
		number = (number * 10) + is_digit(*str);
		str++;
	}
	number *= counter;
	return (number);
}
/*
int	main(void)
{
	char	*str;
	int		numb;

	str = " ---+--+1234ab567";
	numb = ft_atoi(str);
	printf("The number is:%d\n", numb);
	return (0);
}
*/
