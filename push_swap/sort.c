/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-alm <dide-alm@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 11:58:01 by dide-alm          #+#    #+#             */
/*   Updated: 2025/11/27 11:58:01 by dide-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_issorted(t_list_man *s_lman, char list)
{
	unsigned int	cnt;

	cnt = 0;
	while (cnt < s_lman->m_size - 1)
	{
		if (s_lman->a[cnt] > s_lman->a[cnt + 1] && list == 'a')
			return (1);
		else if (s_lman->ia[cnt] > s_lman->ia[cnt + 1] && list == 'l')
			return (1);
		cnt++;
	}
	return (0);
}

void	ft_sort_start(t_list_man *s_lman)
{
	if (ft_issorted(s_lman, 'a') == 1)
	{
		if (s_lman->m_size <= 3)
			ft_sort_3(s_lman);
		else if (s_lman->m_size == 4)
			ft_sort_4(s_lman);
		else if (s_lman->m_size == 5)
			ft_sort_5(s_lman);
		else
			ft_sort_big(s_lman);
	}
}
