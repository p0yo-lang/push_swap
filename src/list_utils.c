/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacedo- <mmacedo-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-22 17:46:06 by mmacedo-          #+#    #+#             */
/*   Updated: 2025-05-22 17:46:06 by mmacedo-         ###   ########.fr       */
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
	head->empty = 1;
	head->next = NULL;
	temp = head;
	while (i < size)
	{
		new_node = malloc(sizeof(node_t));
		new_node->val = val_array[i];
		new_node->empty = 1;
		new_node->next = NULL;
		temp->next = new_node;
		temp = new_node;
		i++;
	}
	return (head);
}
node_t	*fill_empty_list(int size)
{
	int		i;
	node_t	*head;
	node_t	*new_node;
	node_t	*temp;

	i = 1;
	head = (node_t *)malloc(sizeof(node_t));
	head->empty = 0;
	head->next = NULL;
	temp = head;
	while (i < size)
	{
		new_node = malloc(sizeof(node_t));
		new_node->empty = 0;
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

void	swap(node_t *head)
{
	int	temp;

	temp = head->val;
	head->val = head->next->val;
	head->next->val = temp;
}
node_t	*append_last(node_t **head, int value)
{
	node_t	*last;
	node_t	*new_node;

	last = *head;
	while (last->next)
		last = last->next;
	new_node = malloc(sizeof(node_t));
	last->next = new_node;
	new_node->val = value;
	return (new_node);
}
node_t	*append_begg(node_t **head, int value)
{
	node_t	*new_node;

	new_node = malloc(sizeof(node_t));
	new_node->val = value;
	new_node->empty = 1;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}

node_t	*delete_node(node_t **head, int idx)
{
	node_t	*temp;
	node_t	*prev;
	int		i;

	i = 0;
	temp = *head;
	if (idx == 0)
	{
		*head = temp->next;
		free(temp);
		return (*head); 
	}
	while (i < idx)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}
	if (temp)
	{
		prev->next = temp->next;
		free(temp);
	}
	return (*head);
}

node_t	*push(node_t **from, node_t **to)
{
	node_t	*head;

	if ((*from)->empty == 0)
		return (*from);
	head = *to;
	append_begg(to, (*from)->val);
	delete_node(from, 0);
	return (*from);
}
