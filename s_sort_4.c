/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_sort_4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelna <mabdelna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 22:14:44 by mabdelna          #+#    #+#             */
/*   Updated: 2024/03/05 22:18:24 by mabdelna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_4(t_list **stack_a, t_list **stack_b)
{
	int	min;
	int	step;

	ft_stack_index(stack_a);
	min = ft_get_min(stack_a, -1);
	step = ft_get_step(stack_a, min);
	if (step == 1)
		sa(stack_a);
	else if (step == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (step == 3)
		rra(stack_a);
	if (ft_is_sorted(stack_a))
		return ;
	pb(stack_a, stack_b);
	ft_sort_3(stack_a);
	pa(stack_a, stack_b);
}
