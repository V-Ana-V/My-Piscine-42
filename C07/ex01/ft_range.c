/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:47:51 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/08 18:28:32 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	l;
	int	i;
	int	*arr;

	i = 0;
	l = max - min;
	if (l <= 0)
	{
		arr = 0;
		return (arr);
	}
	arr = (int *) malloc(l * sizeof(int));
	if (arr == 0)
		return (0);
	while (i < l)
	{
		*(arr + i) = min + i;
		i++;
	}
	return (arr);
}
/*
int	main(void)
{
	int	*arr;
	int	max;
	int	min;
	int	i;

	max = 8;
	min = 1;
	i = 0;
	arr = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d,", *(arr + i));
		i++;
	}
	return (0);
}
*/
