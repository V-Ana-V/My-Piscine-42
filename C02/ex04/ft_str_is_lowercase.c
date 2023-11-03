/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:24:31 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/02 15:31:20 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!((*str >= 'a') && (*str <= 'z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str;
	int		alpha;

	str = "mommY";
	alpha = ft_str_is_lowercase(str);
	printf("The alpha is %d\n", alpha);
	return (0);
}
*/
