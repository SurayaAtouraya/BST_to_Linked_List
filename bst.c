#include "assignment3.h"
#include <stdlib.h>

TreeNodePtr createBSTnode(int key)			

{

  TreeNodePtr newNode;						
  newNode = malloc(sizeof(struct TreeNode));			
  if (newNode == NULL)						
  {
    return NULL;						
  }
  newNode->key=key;						
  newNode->left=NULL;						
  newNode->right=NULL;						
  return newNode;						

}

TreeNodePtr insertNodeIntoBST(TreeNodePtr root, const TreeNodePtr z)	

{
  TreeNodePtr roottemp = root;					

  while (1)							
  {
    if (z->key >= roottemp->key)				
    {
      if (roottemp->right == NULL)				
      {
        roottemp->right = z;					
        return root;						
      }
      roottemp = roottemp->right;				
    }
    else							
    {
      if (roottemp->left == NULL)				
      {
        roottemp->left = z;					
        return root;					
      }
      roottemp = roottemp->left;				
    }
  }
}

TreeNodePtr insertArrayIntoBST(int n, int *A)		
{
  TreeNodePtr root = createBSTnode(A[0]);
  TreeNodePtr current;
  int i;
  for (i = 1;i<n;i++)
  {
    current = createBSTnode(A[i]);
    root = insertNodeIntoBST(root, current);
  }
  return root;
}

void deallocateBST(TreeNodePtr root)			
{
  if (root != NULL)
  {
  deallocateBST(root->left);
  deallocateBST(root->right);
  free(root);
  root = NULL;
  }
}

ListNodePtr convertBSTtoLinkedList(TreeNodePtr root)
{
    ListNodePtr list,head;
    list = malloc(sizeof(struct ListNode));
    list->key = root->key;
    if (root->right != NULL)
    {
        list->next = convertBSTtoLinkedList(root->right);
    }
    else {list->next = NULL;}
    if (root->left != NULL)  
    {
    ListNodePtr tail;
    head = convertBSTtoLinkedList(root->left);
    tail = head;
    while (tail->next != NULL) {
        tail = tail->next;
    }
    tail->next = list;
    return head;
    }
    return list;
}

/*Output of ./bst 10 10:
Array
3 6 7 5 3 5 6 2 9 1 
BST
1 2 3 3 5 5 6 6 7 9 
Linked list
1 2 3 3 5 5 6 6 7 9 
Reversed linked list
9 7 6 6 5 5 3 3 2 1 

Output of valgrind ./bst 10 10 after HEAP SUMMARY:
==7610== HEAP SUMMARY:
==7610==     in use at exit: 0 bytes in 0 blocks
==7610==   total heap usage: 22 allocs, 22 frees, 1,464 bytes allocated
==7610== 
==7610== All heap blocks were freed -- no leaks are possible
==7610== 
==7610== For counts of detected and suppressed errors, rerun with: -v
==7610== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)*/