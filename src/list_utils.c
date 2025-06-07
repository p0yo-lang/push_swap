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


node_t	*fill_list(int size, int val_array[])
{
	int		i;
	node_t	*head;
	node_t	*new_node;
	node_t	*temp;

	i = 1;
	head = (node_t *)malloc(sizeof(node_t));
	head->val = val_array[0];
	head->next = NULL;
	temp = head;
	while (i < size)
	{
		new_node = malloc(sizeof(node_t));
		new_node->val = val_array[i];
		new_node->next = NULL;
		temp->next = new_node;
		temp = new_node;
		i++;
	}
	return (head);
}

void	print_list(node_t *head)
{
	node_t	*node;

	node = head;
	while (node)
	{
		ft_printf("Value:%i\n", node->val);
		node = node->next;
	}
}
