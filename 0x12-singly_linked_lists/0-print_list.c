#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h) {
    size_t m = 0;

    while (h != NULL) {
        if (h->str != NULL) {
            printf("%s\n", h->str);
        } else {
            printf("[0] (nil)\n");
        }

        m++;
        h = h->next;
    }

    return (m);
}
