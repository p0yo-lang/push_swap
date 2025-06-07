

typedef struct node
{
	int				val;
	struct node		*next;

}node_t;



node_t	*fill_list(int size, int *val_array);
void	print_list(node_t *head);
void	sa(node_t *stack_a);
void	sb(node_t *stack_b);
void	ra(node_t *stack_a);
void	rb(node_t *stack_b);
void	ss(node_t *stack_a, node_t *stack_b);
void	pa(node_t *stack_a, node_t *stack_b);
void	pb(node_t *stack_b, node_t *stack_a);
