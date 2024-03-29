/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateo <mateo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:00:25 by mateo             #+#    #+#             */
/*   Updated: 2023/11/12 17:22:47 by mateo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

void	ft_putstr(char *str); // print error msg

char	*ft_clean_num(char *str, int *num_len); // clean nbr

int	ft_check_error(int argc, char **argv); // check error

int	ft_strcmp(char *s1, char *s2); // read dict; check dict; search dict
char	*ft_read_dict(char *str); // read dict

int	ft_c_numeric(char c); // check dict
int	ft_c_printable(char c); // check dict
int	ft_check_dict(char *dict); // check dict

int	is_sep(char c, char *charset); // split dict
int	ft_numwords(char *str, char *charset); // split dict
int	ft_totlen(char *str, int i, char *charset); // split dict
char	*ft_putword(char *str, int *i, char *charset); // split dict
char	**ft_split(char *str, char *charset); // split dict

int	ft_strlen(char *str); //search dict
int	ft_is_alpha(char c); // search dict
char	*ft_match_dict(char **dict_nums, char **dict_words, char *nums); //search dict
char	**ft_search(char **dict_nums, char **dict_words, char **nums, char **words, int n); // search dict

#endif