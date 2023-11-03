/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:07:02 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/01 13:19:21 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*result;

	result = str;
	while (*str)
	{
		if ((*str >= 'A') && (*str <= 'Z'))
		{
			*str = *str + 32;
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
	result = ft_strlowcase(str);
	while (*result)
	{
		write(1, result, 1);
		result++;
	}
	write(1, "\n", 1);
	return (0);
}
*/
