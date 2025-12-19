/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-alm <dide-alm@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 09:07:05 by dide-alm          #+#    #+#             */
/*   Updated: 2025/12/04 09:55:53 by dide-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_detect_min(t_list_man *s_lman)
{
	unsigned int	cnt;
	int				min;

	cnt = 0;
	min = 2147483647;
	while (cnt != s_lman->a_s)
	{
		if (s_lman->a[cnt] < min)
			min = s_lman->a[cnt];
		cnt++;
	}
	return (min);
}

int	ft_detect_secondmin(t_list_man *s_lman, int min)
{
	unsigned int	cnt;
	int				s_min;

	cnt = 0;
	s_min = 2147483647;
	while (cnt != s_lman->a_s)
	{
		if (s_lman->a[cnt] < s_min && s_lman->a[cnt] > min)
			s_min = s_lman->a[cnt];
		cnt++;
	}
	return (s_min);
}
