/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:39:29 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/02 14:52:17 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	char_is_printable(char c)
{
	if (!((c >= 32) && (c <= 126)))
	{
		return (0);
	}
	return (1);
}

void	print_hexadecimal(char c)
{
	char	*hex_digits;
	int		high_nibble;
	int		low_nibble;

	hex_digits = "0123456789abcdef";
	high_nibble = (c >> 4) & 0x0F;
	low_nibble = c & 0x0F;
	write(1, "\\", 1);
	write(1, (hex_digits + high_nibble), 1);
	write(1, (hex_digits + low_nibble), 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (char_is_printable(*str) == 1)
		{
			write(1, str, 1);
		}
		else
		{
			print_hexadecimal(*str);
		}
		str++;
	}
}
/*
int	main(void)
{
	char	*str;

	str = "My name\r is \n Anastasiia\t";
	ft_putstr_non_printable(str);
	return (0);
}
*/
