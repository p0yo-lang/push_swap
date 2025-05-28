#include "libft.h"
#include "push_swap.h"


int main()
{
	node_t	*head;
	node_t	*head2;
	int val_array[5] = {2, 4, 3, 7, 8};
	int val_array2[5] = {1, 5, 7, 9, 24};

	head = fill_list(5, val_array);
	head2 = fill_list(5, val_array2);
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
	ft_printf("PUSH\n\n\n");
	ft_printf("LIST 1\n");
	print_list(head);
	ft_printf("\nLIST 2\n");
	print_list(head2);
	ft_printf("PUSH\n");
	push(&head2, &head);
	ft_printf("\nLIST 1\n");
	print_list(head);
	ft_printf("\nLIST 2\n");
	print_list(head2);
	return 0;
}