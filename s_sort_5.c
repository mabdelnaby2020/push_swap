/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_sort_5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelna <mabdelna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 22:13:23 by mabdelna          #+#    #+#             */
/*   Updated: 2024/03/09 09:58:07 by mabdelna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_5(t_list **stack_a, t_list **stack_b)
{
	int	step;

	step = ft_get_step(stack_a, ft_get_min(stack_a, -1));
	if (step == 1)
		ra(stack_a);
	else if (step == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (step == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (step == 4)
		rra(stack_a);
	if (ft_is_sorted(stack_a))
		return ;
	pb(stack_a, stack_b);
	ft_sort_4(stack_a, stack_b);
	pa(stack_a, stack_b);
}
