/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelikan <avelikan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:47:54 by avelikan          #+#    #+#             */
/*   Updated: 2023/11/12 19:02:16 by avelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str, int s)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	if (s != 0)
		write(1, " ", 1);
}

void	three(char **dict_d, char **dict_teen_d, char **dict_ty_d, char *str)
{
	if (str[0] != '0')
	{
		ft_putstr(*(dict_d + (str[0] - '0')), 1);
		if (str[1] == '0' && str[2] == '0')
			ft_putstr("hundred", 0);
		else
			ft_putstr("hundred", 1);
	}
	if (str[1] >= '2')
	{
		if (str[2] == '0')
			ft_putstr(*(dict_ty_d + (str[0] - '0' - 2)), 0);
		else
			ft_putstr(*(dict_ty_d + (str[1] - '0' - 2)), 1);
	}
	if (str[1] == '1')
		ft_putstr(*(dict_teen_d + (str[2] - '0')), 0);
	if (((str[1] >= '2') && (str[2] != '0'))
		|| ((str[1] == '0') && (str[2] != '0')))
		ft_putstr(*(dict_d + (str[2] - '0')), 0);
}
