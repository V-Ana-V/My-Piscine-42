/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:13:58 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/03 13:44:45 by avelikan         ###   ########.fr       */
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

int	char_is_alpha(char *c)
{
	if (!(((*c >= 'a') && (*c <= 'z')) || ((*c >= 'A') && (*c <= 'Z'))))
	{
		return (0);
	}
	return (1);
}

int	char_is_number(char *c)
{
	if (!((*c >= '0') && (*c <= '9')))
	{
		return (0);
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	char	*result;

	str = ft_strlowcase(str);
	result = str;
	if (char_is_alpha(str) == 1)
	{
		*str = *str - 32;
	}
	str++;
	while (*str)
	{
		if (char_is_alpha(str) == 1)
		{
			if ((char_is_alpha(str - 1) == 0) && (char_is_number(str - 1) == 0))
			{
				*str = *str - 32;
			}
		}
		str++;
	}
	return (result);
}
/*
int	main(void)
{
	char	my_string[41] = "42mots quarante-deux; cinquante+et+un";
	char	*str;
	char	*result;

	str = my_string;
	result = ft_strcapitalize(str);
	while (*result)
	{
		write(1, result, 1);
		result++;
	}
	write(1, "\n", 1);
	return (0);
}
*/
