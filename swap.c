/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelna <mabdelna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 21:42:03 by mabdelna          #+#    #+#             */
/*   Updated: 2024/03/05 21:42:41 by mabdelna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap(t_list **stack)
{
	t_list	*head;
	t_list	*next;
	int		temp_data;
	int		temp_index;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	next = head->next;
	if (!head && !next)
		ft_error("Error while Swapping!!");
	temp_data = head->data;
	temp_index = head->index;
	head->data = next->data;
	head->index = next->index;
	next->data = temp_data;
	next->index = temp_index;
	return (0);
}

int	sa(t_list **stack)
{
	if (swap(stack) == -1)
		return (-1);
	ft_putstr_fd("sa", 1);
	return (0);
}

int	sb(t_list **stack)
{
	if (swap(stack) == -1)
		return (-1);
	ft_putstr_fd("sb", 1);
	return (0);
}

int	ss(t_list **stack_a, t_list **stack_b)
{
	if (swap(stack_a) == -1)
		return (-1);
	if (swap(stack_b) == -1)
		return (-1);
	ft_putstr_fd("ss", 1);
	return (0);
}
