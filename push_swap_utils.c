/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-alm <dide-alm@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 16:58:00 by dide-alm          #+#    #+#             */
/*   Updated: 2025/11/21 16:58:00 by dide-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_error_handling(int *a)
{
	free(a);
	ft_printf("Error\n");
	exit(0);
}

int	ft_int_memchr(int *a, int n, int argc)
{
	int			counter;

	counter = 0;
	while (counter < argc - 1)
	{
		if (a[counter] == n)
			return (-1);
		counter++;
	}
	return (0);
}

long int	ft_latoi(const char *nptr)
{
	long int	result;
	size_t		counter;
	int			is_neg;

	counter = 0;
	is_neg = 1;
	result = 0;
	while (nptr[counter] == 32 || (nptr[counter] >= 9 && nptr[counter] <= 13))
		counter++;
	if (nptr[counter] == 45 || nptr[counter] == 43)
	{
		if (nptr[counter] == 45)
			is_neg = -1;
		counter++;
	}
	while (nptr[counter] >= 48 && nptr[counter] <= 57)
	{
		result = result * 10 + (nptr[counter] - 48);
		counter++;
	}
	return (result * is_neg);
}

int	ft_check_chars(char current, char next)
{
	if (((ft_isdigit(current) == 0)
			&& (current != '-' && current != '+' && current != ' '))
		|| (current == '-' && next == '\0')
		|| (current == '-' && next == ' ')
		|| (current == '-' && next == '+')
		|| (current == '-' && next == '-')
		|| (current == '+' && next == '\0')
		|| (current == '+' && next == ' ')
		|| (current == '+' && next == '-')
		|| (current == '+' && next == '+'))
		return (0);
	return (1);
}

int	ft_check_isvalid(int cnt, char *argv[])
{
	long int	nl;
	int			cnt_c;

	cnt_c = 0;
	while (argv[cnt][cnt_c])
	{
		if (ft_check_chars(argv[cnt][cnt_c], argv[cnt][cnt_c + 1]) == 0)
			return (-1);
		cnt_c++;
	}
	nl = ft_latoi(argv[cnt]);
	if (nl > 2147483647 || nl < -2147483648)
		return (-1);
	return (1);
}
