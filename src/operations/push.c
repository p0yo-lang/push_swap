/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacedo- <mmacedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 21:28:08 by mmacedo-          #+#    #+#             */
/*   Updated: 2025/06/17 00:56:16 by mmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "push_swap.h"
#include <unistd.h>

static node_t	*push(node_t **from, node_t **to)
{
	node_t	*temp;

	if (*from == NULL)
		return (NULL);
	temp = *from;
	*from = (*from)->next;
	temp->next = *to;
	*to = temp;
	return ((*from));
}

void	pa(node_t **stack_a, node_t **stack_b)
{
	push(stack_b, stack_a);
	ft_printf("pa\n");
}

void	pb(node_t **stack_b, node_t **stack_a)
{
	push(stack_a, stack_b);
	ft_printf("pb\n");
}
