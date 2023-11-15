/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:52:53 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/14 19:24:38 by avelikan         ###   ########.fr       */
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

char	*dup_str_n(char *str, int n)
{
	char	*dup;
	int		i;

	i = 0;
	dup = malloc((n + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	while (i < n)
	{
		dup[i] = str[i];
		i++;
	}
	dup[n] = '\0';
	return (dup);
}

char	**arr_add(char *str, char **arr)
{
	int		l;
	int		i;
	char	**arr_new;

	l = 0;
	if (arr != NULL)
	{
		while (arr[l])
			l++;
	}
	arr_new = malloc((l + 2) * sizeof(char *));
	if (!arr_new)
		return (NULL);
	arr_new[0] = str;
	i = 1;
	while (i < l + 1)
	{
		arr_new[i] = arr[i - 1];
		i++;
	}
	arr_new[l + 1] = 0;
	return (arr_new);
}

int	is_sep(char c, char *charset)
{
	int	i;
	int	l;

	l = ft_strlen(charset);
	i = 0;
	while (i < l)
	{
		if (c == charset[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		i;

	i = 0;
	arr = NULL;
	if (!*str)
		return (NULL);
	while (i < ft_strlen(str))
	{
		if (is_sep(str[i], charset))
		{
			if ((i != 0) && (i != ft_strlen(str) - 1))
				arr = arr_add(dup_str_n(str, i),
						ft_split(str + i + 1, charset));
			if (i == 0)
				arr = ft_split(str + 1, charset);
			if (i == ft_strlen(str) - 1 && ft_strlen(str) != 1)
				arr = arr_add(dup_str_n(str, i), NULL);
			return (arr);
		}
		i++;
	}
	if (i == ft_strlen(str))
		arr = arr_add(dup_str_n(str, i), NULL);
	return (arr);
}
/*
int	main(int ac, char **av)
{
	char	**arr;
	char	*dup_str;
	int		len;

	(void)ac;
	len = ft_strlen(av[1]);
	dup_str = dup_str_n(av[1], len);
	printf("MAIN: dup_str_n: %s\n", dup_str);
	arr = ft_split(av[1], av[2]);
	if (arr != NULL)
	{
		printf("MAIN: array is not null\n");
		while (*arr)
		{
			printf("MAIN: Inside the array we have %s\n", *arr);
			arr++;
		}
	}
	else
		printf("MAIN: array is NULL");
	return (0);
}
*/
