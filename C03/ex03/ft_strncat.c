/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:46:27 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/04 14:58:55 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include <stdio.h>
*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*dest1;
	unsigned int	i;

	dest1 = dest;
	while (*dest)
	{
		dest++;
	}
	i = 0;
	while ((*(src + i) != '\0') && (i < nb))
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
	printf("My function returns: %s\n", ft_strncat(dest, src, 0));
	printf("Original function returns: %s\n", strncat(dest_c, src, 0));
	return (0);
}
*/
