/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:40:05 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/03 13:40:29 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*dest_start;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	dest_start = dest;
	while (*src && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	while (j < (n - i))
	{
		*dest = '\0';
		dest++;
		j++;
	}
	return (dest_start);
}
/*
int	main(void)
{
	char	*s;
	char	*d;
	char	*final;
	char	d_array[36] = "geneA geneA geneA geneA geneA geneA";
	char	s_array[18] = "geneB geneB geneB";
	int		j;

	j = 0;
	d = d_array;
	s = s_array;
	final = ft_strncpy(d, s, 29);
	while (j < 35)
	{
		write(1, final, 1);
		final++;
		j++;
	}
	return (0);
}
*/
