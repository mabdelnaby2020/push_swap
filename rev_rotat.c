/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelna <mabdelna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 21:41:10 by mabdelna          #+#    #+#             */
/*   Updated: 2024/03/05 21:54:12 by mabdelna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rev_rotat(t_list **stack)
{
	t_list	*head;
	t_list	*tail;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	tail = ft_lstlast(*stack);
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	tail->next = *stack;
	*stack = tail;
	return (0);
}

int	rra(t_list **stack)
{
	if (rev_rotat(stack) == -1)
		return (-1);
	ft_putstr_fd("rra", 1);
	return (0);
}

int	rrb(t_list **stack)
{
	if (rev_rotat(stack) == -1)
		return (-1);
	ft_putstr_fd("rrb", 1);
	return (0);
}

int	rrr(t_list **stack_a, t_list **stack_b)
{
	if (rev_rotat(stack_a) == -1)
		return (-1);
	if (rev_rotat(stack_b) == -1)
		return (-1);
	ft_putstr_fd("rrb", 1);
	return (0);
}
