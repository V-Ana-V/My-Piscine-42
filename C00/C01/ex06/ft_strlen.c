/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:41:28 by avelikan          #+#    #+#             */
/*   Updated: 2023/10/30 11:49:54 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}
/*
int	main(void)
{
	int		len;
	char	*str;

	str = "I love dogs";
	len = ft_strlen(str);
	printf("The length of your string is %d\n", len);
	return (0);
}
*/
