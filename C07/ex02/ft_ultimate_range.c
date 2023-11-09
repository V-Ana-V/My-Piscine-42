/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:32:53 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/09 12:41:01 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	l;
	int	i;

	i = 0;
	l = (max - min);
	if (l <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(l * sizeof(int));
	if (*range == 0)
		return (-1);
	while (i < l)
	{
		*(*range + i) = min + i;
		i++;
	}
	return (l);
}
/*
int	main(void)
{
	int	*range;
	int	size;
	int	min;
	int	max;
	int	i;

	i = 0;
	min = 2;
	max = 8;
	size = ft_ultimate_range(&range, min, max);
	printf("Size range is: %d\n", size);
	while (i < (size))
	{
		printf(" %d\n", *(range + i));
		i++;
	}
	return (0);
}
*/
