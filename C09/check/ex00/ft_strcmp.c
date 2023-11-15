/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:35:42 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/03 15:57:03 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
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
/*
int	main(void)
{
	char	*s1;
	char	*s2;
	int		cmp;
	int		original;

	s1 = "banana";
	s2 = "banana";
	original = strcmp(s1, s2);
	cmp = ft_strcmp(s1, s2);
	printf("The function strcmp returns %d,"
		"\nMy function returns %d\n", original, cmp);
	return (0);
}
*/
