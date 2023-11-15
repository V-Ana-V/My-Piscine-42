/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:17:49 by avelikan          #+#    #+#             */
/*   Updated: 2023/10/30 14:18:26 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i;
		while (j < size)
		{
			if (*(tab + i) > *(tab + j))
			{
				temp = *(tab + i);
				*(tab + i) = *(tab + j);
				*(tab + j) = temp;
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	*tab;
	int	arr[10];
	int	i;
	int	size;

	tab = arr;
	size = 10;
	i = 0;
	printf("Initial array is:\n");
	while (i < size)
	{
		*(tab + i) = i * 8 % 13;
		printf("%d, ",*(tab + i));
		i++;
	}
	ft_sort_int_tab(tab, size);
	printf("Finally, we have:\n");
	i = 0;
	while (i < size)
	{
		printf("%d, ",*(tab + i));
		i++;
	}
	return (0);
}
*/
