/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacedo- <mmacedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:46:06 by mmacedo-          #+#    #+#             */
/*   Updated: 2025/06/16 10:12:50 by mmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include <stddef.h>
#include <stdlib.h>


node_t	*fill_list(int size, int *val_array)
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

void	free_stack(struct node* head)
{
   struct node* tmp;

   while (head != NULL)
    {
       tmp = head;
       head = head->next;
       free(tmp);
    }
}

int	get_stack_len(node_t *stack_head)
{
	int	len;
	
	len = 0;
	while(stack_head)
	{
		stack_head = stack_head->next;
		len++;
	}
	return (len);
}

int	*stack_get_array(node_t	*stack_head)
{
	int		*array;
	int		i;
	size_t	len;
	
	i = 0;
	len = get_stack_len(stack_head);
	array = malloc(len * sizeof(int));
	if (!array)
		return (NULL);
	while(stack_head)
	{
		array[i] = stack_head->val;
		i++;
		stack_head = stack_head->next;
	}
	return (array);
}

