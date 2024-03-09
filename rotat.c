/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotat.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelna <mabdelna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 21:41:53 by mabdelna          #+#    #+#             */
/*   Updated: 2024/03/05 21:56:25 by mabdelna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotat(t_list **stack)
{
	t_list	*head;
	t_list	*tail;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	tail = ft_lstlast(head);
	*stack = head->next;
	head->next = NULL;
	tail->next = head;
	return (0);
}

int	ra(t_list **stack)
{
	if (rotat(stack) == -1)
		return (-1);
	ft_putstr_fd("ra", 1);
	return (0);
}

int	rb(t_list **stack)
{
	if (rotat(stack) == -1)
		return (-1);
	ft_putstr_fd("rb", 1);
	return (0);
}

int	rr(t_list **stack_a, t_list **stack_b)
{
	if (rotat(stack_a) == -1)
		return (-1);
	if (rotat(stack_b) == -1)
		return (-1);
	ft_putstr_fd("rr", 1);
	return (0);
}
