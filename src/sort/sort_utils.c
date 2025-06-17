/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacedo- <mmacedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 21:56:04 by mmacedo-          #+#    #+#             */
/*   Updated: 2025/06/17 01:19:31 by mmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(node_t *stack)
{
	while (stack->next)
	{
		if (stack->val > stack->next->val)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	get_min_index(node_t *stack, int *min)
{
	int		pos;
	node_t	*head;

	pos = 0;
	head = stack;
	(*min) = stack->val;
	while (stack)
	{
		if (stack->val < (*min))
			(*min) = stack->val;
		stack = stack->next;
	}
	stack = head;
	while (stack && stack->val != (*min))
	{
		stack = stack->next;
		pos++;
	}
	return (pos);
}

int	get_max_index(node_t *stack, int *max)
{
	int		pos;
	node_t	*head;

	pos = 0;
	head = stack;
	(*max) = stack->val;
	while (stack)
	{
		if (stack->val > (*max))
			(*max) = stack->val;
		stack = stack->next;
	}
	stack = head;
	while (stack && stack->val != (*max))
	{
		stack = stack->next;
		pos++;
	}
	return (pos);
}

void	push_all_to_a(node_t **stack_b_head, node_t **stack_a_head)
{
	while (*stack_b_head)
		pa(stack_a_head, stack_b_head);
}
