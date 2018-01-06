A program that once compiled creates an executable, bst. bst takes as input first the number of integers and then the maximum value of an int plus one. With this input, an array is generated from the input given for the number of elements and their range. A Binary Search Tree is then created from the generated array. The BST is then converted to a linked list and that linked list is then reversed. As output, the array, the BST that is searched and printed in increasing order, the linked list in increasing order, and the reverse linked list in decreasing order.
    
Sample run:
    
    ./bst
    
    Usage ./bst n nmax
    n is the number of integers between 0 and nmax-1
    
    ./bst 10 100
    Array
    83 86 77 15 93 35 86 92 49 21
    BST
    15 21 35 49 77 83 86 86 92 93
    Linked list
    15 21 35 49 77 83 86 86 92 93
    Reversed linked list
    93 92 86 86 83 77 49 35 21 15
