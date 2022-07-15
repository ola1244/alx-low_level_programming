#include "lists.h"
#include <string.h>
/**
 * _strlen - find string length
 * @str: string
 * Return: length
 */
int _strlen(const char *str)
{
int len;
for (len = 0; str[len] != '\0'; len++)
;
return (len);
}
/**
 * add_node_end - add node to end of linked list
 * @head: linked list
 * @str: data for new node
 * Return: address of new element, or NULL if failed
 * add_node_end - Adds a new node at the end
 *                of a list_t list.
 * @head: A pointer the head of the list_t list.
* @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *tmp; /* create new node */
char *dup;
int len;
list_t *new, *last;
if (str == NULL) /* validate input */
return (NULL);
if (strdup(str) == NULL) /* check if malloc errored */
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new_node = malloc(sizeof(list_t)); /* malloc for new node */
if (new_node == NULL)
dup = strdup(str);
if (str == NULL)
{
free(new);
return (NULL);
}
new_node->str = strdup(str); /* set node values */
new_node->len = _strlen(str);
new_node->next = NULL;
for (len = 0; str[len];)
len++;
new->str = dup;
new->len = len;
new->next = NULL;
if (*head == NULL)
*head = new;
if (*head == NULL) /* if no list nodes, set new_node to beginning */
*head = new_node;
else
{
tmp = *head;
while (tmp->next != NULL)
tmp = tmp->next;
tmp->next = new_node;
last = *head;
while (last->next != NULL)
last = last->next;
last->next = new;
}
return (new_node);
return (*head);

}
