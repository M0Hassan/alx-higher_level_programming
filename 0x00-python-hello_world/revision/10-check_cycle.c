#include<stdio.h>
#include "lists.h"

/**
 *check_cycle - checks whether a singly linked list contains cycles
 *@list - the singly linked list
 *return: 0 if no cycle and 1 otherwise
 */

int check_cycle(listint_t *list)
{
  listint_t *first = list;
  listint_t *second = list;

  if (!list)
    {
      return (0);
    }

  while(1)
    {
      if (first->next != NULL && first->next->next != NULL)
	{
	  first = first->next->next;
	  second = second->next;
	}
    
      
      if (first == second)
	{
	  return (1);
	}
      
      else 
	{
	  return (0);
	}
    }
}
