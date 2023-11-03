/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:07:02 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/01 12:20:59 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*result;

	result = str;
	while (*str)
	{
		if ((*str >= 'a') && (*str <= 'z'))
		{
			*str = *str - 32;
		}
		str++;
	}
	return (result);
}
/*
int	main(void)
{
	char	my_string[16] = "geneA geneB !!!";
	char	*str;
	char	*result;

	str = my_string;
	result = ft_strupcase(str);
	while (*result)
	{
		write(1, result, 1);
		result++;
	}
	write(1, "\n", 1);
	return (0);
}
*/
