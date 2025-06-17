/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacedo- <mmacedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 00:39:36 by mmacedo-          #+#    #+#             */
/*   Updated: 2025/06/17 01:09:38 by mmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "push_swap.h"
#include <stdlib.h>

int	main(int argc, char **argv)
{
	node_t	*stack_a_head;
	node_t	*stack_b_head;
	int		*arg_array;
	int		len;

	(void)argc;
	len = count_argv(argv);
	arg_array = parse(argv);
	if (!arg_array)
	{
		ft_printf("Error, please use integers with no dupesi\n");
		return (0);
	}
	stack_b_head = NULL;
	stack_a_head = fill_list(len, arg_array);
	sort(&stack_a_head, &stack_b_head, len);
	free_stack(stack_a_head);
	free_stack(stack_b_head);
	free(arg_array);
	return (0);
}
