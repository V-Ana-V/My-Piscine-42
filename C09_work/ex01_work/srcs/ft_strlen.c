/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:43:18 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/04 17:42:50 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (*str)
	{
		l++;
		str++;
	}
	return (l);
}
/*
int	main(void)
{
	char	*str;

	str = "Hello";
	printf("Length is %d\n", ft_strlen(str));
	return (0);
}
*/
