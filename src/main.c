#include "libft.h"
#include "push_swap.h"


int main()
{
	node_t	*head;
	node_t	*empty_head;
	int val_array[5] = {2, 4, 3, 7, 8};

	head = fill_list(5, val_array);
	empty_head = fill_empty_list(5);
	print_list(head);
	swap(head);
	ft_printf("SWAP_A\n");
	print_list(head);
	append_last(&head, 2);
	ft_printf("APPEND LAST\n");
	print_list(head);
	ft_printf("DELETE\n");
	delete_node(&head, 0);
	print_list(head);
	ft_printf("APPEND BEGG\n");
	append_begg(&head, 5);
	print_list(head);
	return 0;
}