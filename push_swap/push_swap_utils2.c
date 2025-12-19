/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-alm <dide-alm@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:22:10 by dide-alm          #+#    #+#             */
/*   Updated: 2025/12/18 19:07:43 by dide-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_int_bzero(int *l, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (counter < n)
	{
		l[counter] = 0;
		counter++;
	}
}

int	ft_cnt_i(char **input)
{
	int	cnt;

	cnt = 0;
	while (input[cnt] != NULL)
		cnt++;
	return (cnt);
}

void	ft_set_index2(t_list_man *s_lman, int curr_index, int max)
{
	unsigned int	cnt;
	int				n_max;

	while (curr_index != -1)
	{
		n_max = max;
		cnt = 0;
		while (cnt < s_lman->m_size)
		{
			if (s_lman->a[cnt] == max)
				s_lman->ia[cnt] = curr_index;
			cnt++;
		}
		max = -2147483647;
		cnt = 0;
		while (cnt < s_lman->m_size)
		{
			if (s_lman->a[cnt] > max && s_lman->a[cnt] < n_max)
				max = s_lman->a[cnt];
			cnt++;
		}
		curr_index--;
	}
}

void	ft_set_index(t_list_man *s_lman)
{
	unsigned int	cnt;
	int				curr_index;
	int				max;

	cnt = 0;
	max = -2147483647;
	curr_index = s_lman->m_size - 1;
	while (cnt < s_lman->m_size)
	{
		if (s_lman->a[cnt] > max)
			max = s_lman->a[cnt];
		cnt++;
	}
	ft_set_index2(s_lman, curr_index, max);
}

void	free_array(t_list_man *list_man, unsigned int size)
{
	while (size > 0)
	{
		free(list_man->input[size]);
		size--;
	}
	free(list_man->input[size]);
	free(list_man->input);
}