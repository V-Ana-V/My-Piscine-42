/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:10:20 by mateo             #+#    #+#             */
/*   Updated: 2023/11/12 17:22:21 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**ft_search(char **dict_nums, char **dict_words, char **nums, char **words, int n)
{
	int	i;

	words = (char **)malloc(n * sizeof(char *));
	i = 0;
	while (i < n)
	{
		words[i] = ft_match_dict(dict_nums, dict_words, nums[i]);
		i++;
	}
	return (words);
}
