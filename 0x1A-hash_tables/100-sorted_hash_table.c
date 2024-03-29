		ht = ht->next;
	}

	return (0);
}

/**
 * add_node_s - adds a new node at the beginning of a linked list
 * @head: double pointer to the shash_node_t list
 * @key: new key to add in the node
 * @value: value to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
shash_node_t *add_node_s(shash_node_t **head, const char *key,
	const char *value)
{
	shash_node_t *new;

	new = calloc(1, sizeof(shash_node_t));
	if (!new)
		return (NULL);

	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new);
		free(new->key);
		return (NULL);
	}

	if (*head == NULL)
		(*head) = new;
	else
	{
		new->next = (*head);
		(*head) = new;
	}

	return (*head);
}

/**
 * free_list_s - frees a linked list
 * @head: shash_node_t list to be freed
 */
void free_list_s(shash_node_t *head)
{
	shash_node_t *temp;

	while (head)
	{
		temp = head->snext;
		free(head->key);
		free(head->value);
		free(head);
		head = temp;
	}
}
