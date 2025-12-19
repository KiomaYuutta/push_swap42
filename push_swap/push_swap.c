/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-alm <dide-alm@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 22:48:41 by dide-alm          #+#    #+#             */
/*   Updated: 2025/11/15 22:48:41 by dide-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_setlist_a(t_list_man *s_lman, int argc, int isargc)
{
	int	cnt;

	cnt = 0;
	s_lman->a_s = ft_cnt_i(s_lman->input);
	s_lman->m_size = s_lman->a_s;
	ft_int_bzero(s_lman->a, s_lman->a_s);
	while (cnt != argc)
	{
		if (ft_check_isvalid(cnt, s_lman->input) == -1)
			ft_error_handling(s_lman->a);
		if (ft_int_memchr(s_lman, ft_atoi(s_lman->input[cnt]), s_lman->a_s) != 0)
			ft_error_handling(s_lman->a);
		s_lman->a[cnt] = ft_atoi(s_lman->input[cnt]);
		cnt++;
	}
	while (((s_lman->m_size - 1) >> s_lman->mb) > 0)
		(s_lman->mb)++;
	ft_set_index(s_lman);
	if (isargc == 0)
		free_array(s_lman, s_lman->a_s - 1);
}

void	ft_setup_lists(t_list_man *s_lman, int isaargc)
{
	unsigned int	size;

	size = ft_cnt_i(s_lman->input);
	s_lman->a = (int *)ft_calloc(sizeof (int), size);
	if (s_lman->a == NULL)
		exit(0);
	s_lman->ia = (int *)ft_calloc(sizeof (int), size);
	if (s_lman->ia == NULL)
		ft_error_handling(s_lman->a);
	ft_setlist_a(s_lman, ft_cnt_i(s_lman->input), isaargc);
	s_lman->b = (int *)ft_calloc(sizeof (int), size);
	ft_int_bzero(s_lman->b, s_lman->a_s);
	if (s_lman->b == NULL)
	{
		ft_error_handling(s_lman->a);
		ft_error_handling(s_lman->ia);
	}
	s_lman->ib = (int *)ft_calloc(sizeof (int), size);
	if (s_lman->ib == NULL)
	{
		ft_error_handling(s_lman->a);
		ft_error_handling(s_lman->ia);
		ft_error_handling(s_lman->b);
	}
}

void	set_vars(t_list_man *list)
{
	list->a = NULL;
	list->b = NULL;
	list->ia = NULL;
	list->ib = NULL;
	list->input = NULL;
	list->a_s = 0;
	list->b_s = 0;
	list->m_size = 0;
	list->mb = 0;
}

int	main(int argc, char *argv[])
{
	t_list_man	s_lman;
	int			isargc;

	isargc = 1;
	set_vars(&s_lman);
	if (argc == 1)
		exit(0);
	if (argc == 2)
	{
		s_lman.input = ft_split(argv[1], ' ');
		isargc = 0;	
	}
	else
		s_lman.input = &(argv[1]);
	ft_setup_lists(&s_lman, isargc);
	ft_sort_start(&s_lman);
	free(s_lman.a);
	free(s_lman.b);
	free(s_lman.ia);
	free(s_lman.ib);
}
