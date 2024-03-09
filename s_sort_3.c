/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_sort_3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelna <mabdelna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:03:31 by mabdelna          #+#    #+#             */
/*   Updated: 2024/03/09 11:43:54 by mabdelna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_min(t_list **stack, int n)
{
	t_list	*head;
	int		min;

	head = *stack;
	min = head->index;
	while (head->next)
	{
		head = head->next;
		if ((head->index < min) && head->index != n)
			min = head->index;
	}
	return (min);
}

int	ft_get_step(t_list **stack, int min)
{
	t_list	*head;
	int		step;

	step = 0;
	head = *stack;
	while (head)
	{
		if (head->index == min)
			break ;
		step++;
		head = head->next;
	}
	return (step);
}

void	ft_sort_33(t_list **stack, int min, int next_min)
{
	t_list	*head;

	head = *stack;
	if (head->index == min && head->next->index != next_min)
	{
		rra(stack);
		sa(stack);
	}
	else if (head->index == next_min)
	{
		if (head->next->index == min)
			sa(stack);
		else
			rra(stack);
	}
	else if (head->next->index == min)
		ra(stack);
	else
	{
		sa(stack);
		rra(stack);
	}
}

void	ft_sort_3(t_list **stack)
{
	int	min;
	int	next_min;

	min = ft_get_min(stack, -1);
	next_min = ft_get_min(stack, min);
	if (ft_is_sorted(stack))
		return ;
	ft_sort_33(stack, min, next_min);
	return ;
}
