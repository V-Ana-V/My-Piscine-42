/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_dict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:01:01 by mateo             #+#    #+#             */
/*   Updated: 2023/11/12 17:01:23 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_read_dict(char *str)
{
	int		fd;
	char	*dict;

	dict = (char *)malloc(692);
	if (ft_strcmp(str, "numbers") == 0)
	{
		fd = open("numbers.dict", O_RDONLY);
		if (fd > 0)
		{
			read(fd, dict, 691);
			dict[691] = '\0';
		}
		close(fd);
	}
	return (dict);
}
