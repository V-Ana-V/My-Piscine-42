/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:59:59 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/04 17:29:49 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diff;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (i < n)
	{
		diff = *(s1 + i) - *(s2 + i);
		if ((*(s1 + i) == '\0') || (*(s2 + i) == '\0'))
		{
			return (diff);
		}
		else
		{
			if (diff != 0)
			{
				return (diff);
			}
			i++;
		}
	}
	return (0);
}

unsigned int	ft_strlen(char	*str)
{
	unsigned int	i;

	i = 0;
	while (*(str + i))
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int				i;
	unsigned int	l;

	l = ft_strlen(to_find);
	if (l == 0)
	{
		return (str);
	}
	i = 0;
	while (*(str + i))
	{
		if (*(str + i) == *to_find)
		{
			if (ft_strncmp((str + i), to_find, l) == 0)
			{
				return (str + i);
			}
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	*to_find;
	char	*str;
	char	*result;
	char	*result_l;

	to_find = "dog";
	str = "I do love do";
	result = ft_strstr(str, to_find);
	result_l = strstr(str, to_find);
	printf("Results of my function\n");
	if (result)
	{
		printf("Found (%s) in (%s) at the position "
			"%ld\n", to_find, str, result - str);
	}
	else
	{
		printf("(%s) can not be found in (%s)\n", to_find, str);
	}
	printf("Results of library function\n");
	if (result_l)
	{
		printf("Found (%s) in (%s) at the position "
			"%ld\n", to_find, str, result_l - str);
	}
	else
	{
		printf("(%s) can not be found in (%s)\n", to_find, str);
	}
	return (0);
}
