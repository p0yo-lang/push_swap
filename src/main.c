#include "ft_printf.h"
#include "libft.h"
#include "push_swap.h"


int main()
{
	node_t	*head;
	int val_array[5] = {2, 4, 3, 7, 8};

	head = fill_list(5, val_array);
	print_list(head);
	return 0;
}