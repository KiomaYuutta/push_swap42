/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-alm <dide-alm@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 14:26:41 by dide-alm          #+#    #+#             */
/*   Updated: 2025/11/27 14:26:41 by dide-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_sort_3(t_list_man *s_lman)
{
	if (s_lman->a[0] > s_lman->a[1])
		ft_sa(s_lman, 1);
	if (ft_issorted(s_lman, 'a') == 0)
		return ;
	if (s_lman->a[0] > s_lman->a[1] && s_lman->a[0] > s_lman->a[2])
		ft_ra(s_lman, 1);
	if (ft_issorted(s_lman, 'a') == 0)
		return ;
	if (s_lman->a[1] > s_lman->a[2])
	{
		ft_sa(s_lman, 1);
		ft_ra(s_lman, 1);
	}
	if (ft_issorted(s_lman, 'a') == 0)
		return ;
	if (s_lman->a[0] > s_lman->a[1])
		ft_sa(s_lman, 1);
}

void	ft_sort_4(t_list_man *s_lman)
{
	int	min;

	min = ft_detect_min(s_lman);
	while (s_lman->a_s != 3)
	{
		if (s_lman->a[0] == min)
			ft_pb(s_lman);
		else
			ft_ra(s_lman, 1);
	}
	ft_sort_3(s_lman);
	ft_pa(s_lman);
}

void	ft_sort_5(t_list_man *s_lman)
{
	int	min;
	int	s_min;

	min = ft_detect_min(s_lman);
	s_min = ft_detect_secondmin(s_lman, min);
	while (s_lman->a_s != 3)
	{
		if (s_lman->a[0] == min || s_lman->a[0] == s_min)
			ft_pb(s_lman);
		else
			ft_ra(s_lman, 1);
	}
	if (s_lman->b[0] < s_lman->b[1])
	{
		if (s_lman->a[0] > s_lman->a[1])
			ft_ss(s_lman);
		else
			ft_sb(s_lman, 1);
	}
	ft_sort_3(s_lman);
	ft_pa(s_lman);
	ft_pa(s_lman);
}

void	ft_sort_big(t_list_man *s_lman)
{
	unsigned int	size;
	unsigned int	cnt;
	unsigned int	bit_c;

	bit_c = 0;
	size = s_lman->a_s;
	while (bit_c < s_lman->mb)
	{
		cnt = 0;
		while (cnt++ < size)
		{
			if (((s_lman->ia[0] >> bit_c) & 1) == 1)
				ft_ra(s_lman, 1);
			else
				ft_pb(s_lman);
		}
		while (s_lman->b_s > 0)
			ft_pa(s_lman);
		if (ft_issorted(s_lman, 'a') == 0)
			return ;
		bit_c++;
	}
}
