/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:24:31 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/03 13:42:39 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'a') && (*str <= 'z')))
		{
			if (!((*str >= 'A') && (*str <= 'Z')))
			{
				return (0);
			}
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

	str = "I walk with my dog";
	alpha = ft_str_is_alpha(str);
	printf("The alpha is %d\n", alpha);
	return (0);
}
*/
