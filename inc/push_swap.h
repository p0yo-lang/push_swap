

typedef struct node
{
	int				val;
	int				empty;
	struct node		*next;

}node_t;



node_t	*fill_list(int size, int *val_array);
node_t	*fill_empty_list(int size);
node_t	*append_last(node_t **head, int value);
node_t	*delete_node(node_t **head, int idx);
node_t	*append_begg(node_t **head, int value);
node_t	*push(node_t **from, node_t **to);
void	print_list(node_t *head);
void	swap(node_t *head);