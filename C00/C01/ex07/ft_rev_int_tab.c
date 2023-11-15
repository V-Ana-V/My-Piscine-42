/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:51:57 by avelikan          #+#    #+#             */
/*   Updated: 2023/10/30 13:14:41 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = *(tab + i);
		*(tab + i) = *(tab + size - 1 - i);
		*(tab + size - 1 - i) = temp;
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
		*(tab + i) = i;
		printf("%d, ",*(tab + i));
		i++;
	}
	ft_rev_int_tab(tab, size);
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
