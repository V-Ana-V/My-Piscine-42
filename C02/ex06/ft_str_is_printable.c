/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:24:31 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/02 15:33:51 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!((*str >= 32) && (*str <= 126)))
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

	str = "I love ice cream\n!!!!";
	alpha = ft_str_is_printable(str);
	printf("The alpha is %d\n", alpha);
	return (0);
}
*/
