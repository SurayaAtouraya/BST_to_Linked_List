#include "assignment3.h"
#include <stdlib.h>

ListNodePtr reverseList(ListNodePtr head)			
{
  ListNodePtr next = NULL;
  ListNodePtr prev = NULL;
  
  while (head->next != NULL)
  {
    next = head->next;
    head->next = prev;
    prev = head;
    head = next;
  }
    head->next = prev;
    return head;
}

void deallocateList(ListNodePtr head)				
{
  ListNodePtr next = NULL;

  while (head->next != NULL)
  {
    next=head->next;
    free(head);
    head = next;
  }
  free(head);
  head = NULL;
  next = NULL;
}
