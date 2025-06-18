/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacedo- <mmacedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:46:06 by mmacedo-          #+#    #+#             */
/*   Updated: 2025/06/06 21:39:50 by mmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include <stdlib.h>

t_node	*fill_list(int size, int val_array[])
{
	int		i;
	t_node	*head;
	t_node	*new_node;
	t_node	*temp;

	i = 1;
	head = (t_node *)malloc(sizeof(t_node));
	head->val = val_array[0];
	head->next = NULL;
	temp = head;
	while (i < size)
	{
		new_node = malloc(sizeof(t_node));
		new_node->val = val_array[i];
		new_node->next = NULL;
		temp->next = new_node;
		temp = new_node;
		i++;
	}
	return (head);
}

void	print_list(t_node *head)
{
	t_node	*node;

	node = head;
	while (node)
	{
		ft_printf("Value:%i\n", node->val);
		node = node->next;
	}
}
