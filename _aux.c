#include "assignment3.h"
#include <stdlib.h>
#include <stdio.h>

void generateRandomIntArray(int N, int *A, int NMAX)
{
  int i;
  for (i=0;i<N;i++)
  {
    A[i] = (rand() % NMAX);
  }
}

void printArray(int n, int *A)
{
  int i;
  for (i=0;i<n;i++)
  {
    printf("%d ",A[i]);
  }
}

void printBSTinorder(TreeNodePtr root)
{
  if (root != NULL)
  {
     printBSTinorder(root->left);
     printf("%d ",(root->key));  
     printBSTinorder(root->right);  
  }
}

void printList(ListNodePtr head)
{
  while (head != NULL)
  {
    printf("%d ",(head->key));
    head = head->next;
  }
}
