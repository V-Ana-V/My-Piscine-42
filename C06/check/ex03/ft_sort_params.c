/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:00:47 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/06 14:16:56 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write (1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	while ((*(s1 + i) != '\0') && (*(s2 + i) != '\0'))
	{
		diff = *(s1 + i) - *(s2 + i);
		if (diff == 0)
		{
			i++;
		}
		else
		{
			return (diff);
		}
	}
	return (*(s1 + i) - *(s2 + i));
}

char	**swap_arguments(int n, char **av)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (i < (n - 1))
	{
		j = i + 1;
		while (j <= (n - 1))
		{
			if (ft_strcmp(*(av + i), *(av + j)) > 0)
			{
				tmp = *(av + i);
				*(av + i) = *(av + j);
				*(av + j) = tmp;
			}
			j++;
		}
		i++;
	}
	return (av);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	ac -= 1;
	av += 1;
	av = swap_arguments(ac, av);
	while (i < ac)
	{
		ft_putstr(*(av + i));
		i++;
	}
	return (0);
}
