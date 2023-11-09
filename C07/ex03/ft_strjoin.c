/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:14:40 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/09 12:49:13 by avelikan         ###   ########.fr       */
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

int	count_length(int size, char **strs, char *sep)
{
	int	l;
	int	i;

	i = 0;
	l = 0;
	while (i < size)
	{
		l += ft_strlen(*(strs + i));
		if (i != size - 1)
			l += ft_strlen(sep);
		i++;
	}
	return (l);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		l_all;
	char	*final;

	i = 0;
	l_all = count_length(size, strs, sep);
	final = malloc((l_all + 1) * sizeof(char));
	if (final == 0)
		return (0);
	*final = '\0';
	i = 0;
	while (i < size)
	{
		final = ft_strcat(final, *(strs + i));
		if (i != size - 1)
			final = ft_strcat(final, sep);
		i++;
	}
	return (final);
}
/*
int	main(int ac, char **av)
{
	char	*sep;

	sep = "000";
	printf("%s\n", ft_strjoin(ac - 1, av + 1, sep));
	return (0);
}
*/
