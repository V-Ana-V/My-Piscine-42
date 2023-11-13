/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 14:35:20 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/11 19:14:48 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

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

void	total_free(int i, t_stock_str **arr)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free((*arr + j)->copy);
		(*arr + j)->copy = NULL;
		j++;
	}
	free(*arr);
	*arr = NULL;
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			i;
	int			j;

	j = 0;
	i = 0;
	arr = malloc((ac + 1) * sizeof(t_stock_str));
	if (!arr)
		return (0);
	while (i < ac)
	{
		(arr + i)->size = ft_strlen(*(av + i));
		(arr + i)->str = *(av + i);
		(arr + i)->copy = ft_strdup(*(av + i));
		if (!(arr + i)->copy)
		{
			total_free(i, &arr);
			return (NULL);
		}
		i++;
	}
	(arr + i)->str = 0;
	return (arr);
}
/*
int	main(int ac, char **av)
{
	t_stock_str	*arr;

	arr = ft_strs_to_tab(ac, av);
	ft_show_tab(arr);
	return (0);
}
*/
