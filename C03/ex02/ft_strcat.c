/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:36:28 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/04 14:44:45 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include <stdio.h>
*/
char	*ft_strcat(char *dest, char *src)
{
	char	*dest1;
	int		i;

	dest1 = dest;
	while (*dest)
	{
		dest++;
	}
	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest1);
}
/*
int	main(void)
{
	char	dest[100] = "I love ";
	char	dest_c[100] = "I love ";
	char	*src;

	src = "ice cream";
	printf("My function returns: %s\n", ft_strcat(dest, src));
	printf("Original function returns: %s\n", strcat(dest_c, src));
	return (0);
}
*/
