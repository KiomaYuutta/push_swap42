/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-alm <dide-alm@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 22:57:31 by dide-alm          #+#    #+#             */
/*   Updated: 2025/11/15 22:57:31 by dide-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_sb(t_list_man *s_lman, int print_m)
{
	int	temp;
	int	temp_i;

	if (s_lman->b_s < 1)
		return ;
	temp = s_lman->b[0];
	temp_i = s_lman->ib[0];
	s_lman->b[0] = s_lman->b[1];
	s_lman->ib[0] = s_lman->ib[1];
	s_lman->b[1] = temp;
	s_lman->ib[1] = temp_i;
	if (print_m == 1)
		ft_printf("sb\n");
}

void	ft_pb(t_list_man *s_lman)
{
	if (s_lman->a_s == 0)
		return ;
	ft_mover(s_lman->b, s_lman->b, s_lman->b_s);
	ft_mover(s_lman->ib, s_lman->ib, s_lman->b_s);
	s_lman->b[0] = s_lman->a[0];
	s_lman->ib[0] = s_lman->ia[0];
	ft_movel(s_lman->a, s_lman->a, s_lman->a_s);
	ft_movel(s_lman->ia, s_lman->ia, s_lman->a_s);
	(s_lman->b_s)++;
	(s_lman->a_s)--;
	s_lman->a[s_lman->a_s] = 0;
	s_lman->ia[s_lman->a_s] = 0;
	ft_printf("pb\n");
}

void	ft_rb(t_list_man *s_lman, int print_m)
{
	unsigned int	cnt;
	int				temp;
	int				temp_i;

	if (s_lman->b_s < 1)
		return ;
	cnt = 0;
	temp = s_lman->b[0];
	temp_i = s_lman->ib[0];
	while (cnt < s_lman->b_s - 1)
	{
		s_lman->b[cnt] = s_lman->b[cnt + 1];
		s_lman->ib[cnt] = s_lman->ib[cnt + 1];
		cnt++;
	}
	s_lman->b[cnt] = temp;
	s_lman->ib[cnt] = temp_i;
	if (print_m == 1)
		ft_printf("rb\n");
}

void	ft_rrb(t_list_man *s_lman, int print_m)
{
	unsigned int	cnt;
	int				temp;
	int				temp_i;

	if (s_lman->b_s < 1)
		return ;
	cnt = s_lman->b_s - 1;
	temp = s_lman->b[s_lman->b_s - 1];
	temp_i = s_lman->ib[s_lman->b_s - 1];
	while (cnt > 0)
	{
		s_lman->b[cnt] = s_lman->b[cnt - 1];
		s_lman->ib[cnt] = s_lman->ib[cnt - 1];
		cnt--;
	}
	s_lman->b[cnt] = temp;
	s_lman->ib[cnt] = temp_i;
	if (print_m == 1)
		ft_printf("rrb\n");
}
