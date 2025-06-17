#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct node
{
	int				val;
	struct node		*next;

}node_t;

node_t	*fill_list(int size, int *val_array);
void	print_list(node_t *head);
void	free_stack(struct node* head);
void	sa(node_t **stack_a);
void	sb(node_t **stack_b);
void	ra(node_t **stack_a);
void	rb(node_t **stack_b);
void	rra(node_t **stack_a);
void	rrb(node_t **stack_b);
void	rr(node_t **stack_a, node_t **stack_b);
void	ss(node_t **stack_a, node_t **stack_b);
void	pa(node_t **stack_a, node_t **stack_b);
void	pb(node_t **stack_b, node_t **stack_a);
void	rrr(node_t **stack_a, node_t **stack_b);
void	quicksort_array(int arr[], int low, int high);
void	small_sort(node_t **stack_a, node_t **stack_b, int len);
void	sort(node_t **stack_a_head, node_t **stack_b_head, int len);
void	three_number_sort(node_t **stack_a, int x, int y, int z); void	push_all_to_a(node_t **stack_b_head, node_t **stack_a_head);
void 	small_sort_b_and_push(node_t **stack_b, node_t **stack_a, int len);
void	get_min_max(node_t *stack, int *min_val, int *max_val);
void 	normalize_stack(node_t *stack, int size);
void	chunk_sort(node_t **stack_a, node_t **stack_b, int size);
void	free_tab(char **tab);
int		*parse(char **argv);
int		*stack_get_array(node_t	*stack_head);
int		count_argv(char **arg);
int		count_arg(char *arg);
int		get_min_index(node_t *stack, int *min);
int		get_max_index(node_t *stack, int *max);
int		get_stack_len(node_t *stack_head);
int		is_sorted(node_t *array);
int		count_argv(char **argv);
int		get_max_bits(int size);
int		get_index(node_t *stack, int value);

#endif