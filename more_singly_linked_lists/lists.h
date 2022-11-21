#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/* 0. Write a function that prints all the elements of
   a listint_t list. */
size_t print_listint(const listint_t *h);

/* 1.  Write a function that returns the number of
   elements in a linked listint_t list. */
size_t listint_len(const listint_t *h);

/* 2. Write a function that adds a new node at
   the beginning of a listint_t list. */
listint_t *add_nodeint(listint_t **head, const int n);

/* 3. Write a function that adds a new node at
   the end of a listint_t list. */
listint_t *add_nodeint_end(listint_t **head, const int n);

/* 4. Write a function that frees a listint_t list. */
void free_listint(listint_t *head);

/* 5. Write a function that frees a listint_t list. */
void free_listint2(listint_t **head);

/* 6. Write a function that deletes the head node of
   a listint_t linked list, and returns the head node’s data (n). */
int pop_listint(listint_t **head);

/* 7. Write a function that returns the nth node of
   a listint_t linked list. */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/* 8. Write a function that returns the sum of all the data (n) of a listint_t linked list. */
int sum_listint(listint_t *head);

#endif /* _MAIN_H_ */

