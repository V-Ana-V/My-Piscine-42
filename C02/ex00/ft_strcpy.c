/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:09:26 by avelikan          #+#    #+#             */
/*   Updated: 2023/10/31 10:37:00 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*
int	main(void)
{
	char	*s;
	char	*d;
	char	*final;
	char	d_array[21] = "I love dogs and cats";
	char	s_array[17] = "I love only dogs";

	d = d_array;
	s = s_array;
	final = ft_strcpy(d, s);
	while (*final)
	{
		write(1, final, 1);
		final++;
	}
	return (0);
}
*/
