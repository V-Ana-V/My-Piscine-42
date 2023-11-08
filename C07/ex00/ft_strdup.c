/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:34:01 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/08 18:04:43 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
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

char	*ft_strcpy(char *dest, char *src)
{
	char	*dest_start;

	dest_start = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_start);
}

char	*ft_strdup(char *src)
{
	int		l;
	char	*src_dup;

	l = ft_strlen(src);
	src_dup = (char *) malloc(l + 1);
	if (src_dup == 0)
		return (0);
	src_dup = ft_strcpy(src_dup, src);
	return (src_dup);
}
/*
int	main(void)
{
	char	*src;
	char	*src_dup;

	src = "Good morning!";
	src_dup = ft_strdup(src);
	printf("The dublicate string is (%s) "
		"with the length %d", src_dup, ft_strlen(src_dup));
	return (0);
}
*/
