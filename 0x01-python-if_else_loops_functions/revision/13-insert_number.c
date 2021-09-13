#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

listint_t *insert_node(listint_t **head, int number)
{
  listint_t *counter = *head;
  listint_t *newnode;
  
  newnode = (listint_t *)malloc(sizeof(listint_t));
    if (newnode == NULL)
      {
	return (0);
      }

  while (counter->next != NULL)
    {
      if (counter->n < number)
	{
	  counter = counter->next;
	}
    }
      newnode = counter->next;
      counter = newnode->next;
      newnode->n = number;
      free(newnode);
      return newnode;
}
