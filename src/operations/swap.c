/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacedo- <mmacedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 21:19:53 by mmacedo-          #+#    #+#             */
/*   Updated: 2025/06/17 00:57:48 by mmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "push_swap.h"

static node_t	*swap(node_t **head)
{
	int	temp;

	if (!head)
		return (*head);
	temp = (*head)->val;
	(*head)->val = (*head)->next->val;
	(*head)->next->val = temp;
	return (*head);
}

void	sa(node_t **stack_a)
{
	swap(stack_a);
	ft_printf("sa\n");
}

void	sb(node_t **stack_b)
{
	swap(stack_b);
	ft_printf("sb\n");
}

void	ss(node_t **stack_a, node_t **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
}
