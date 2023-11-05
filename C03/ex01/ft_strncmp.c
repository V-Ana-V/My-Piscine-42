/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:57:49 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/04 13:34:33 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
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
/*
int	main(void)
{
	char	*s1;
	char	*s2;
	int		cmp;
	int		original;

	s1 = "banana";
	s2 = "bananar";
	original = strncmp(s1, s2, 6);
	cmp = ft_strncmp(s1, s2, 6);
	printf("The function strncmp returns %d,"
		"\nMy function returns %d\n", original, cmp);
	return (0);
}
*/
