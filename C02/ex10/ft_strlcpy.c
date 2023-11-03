/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:40:05 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/03 13:47:48 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (*src && i < size - 1)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	if (size > 0)
	{
		*dest = '\0';
	}
	while (*src)
	{
		src++;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char			*s;
	char			*d;
	char			d_array[36] = "geneA geneA geneA geneA geneA geneA";
	char			s_array[18] = "geneB geneB geneB";
	int				j;
	unsigned int	l;

	j = 0;
	d = d_array;
	s = s_array;
	l = ft_strlcpy(d, s, 18);
	while (j < 35)
	{
		write(1, d, 1);
		d++;
		j++;
	}
	write(1, "\n", 1);
	printf("the length of source is %d\n", l);
	return (0);
}
*/
