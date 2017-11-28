A program that once compiled creates two executable files. bst and primegap. bst takes as input first the number of integers and then the maximum value of an int plus one. With this input, an array is generated from the input given for the number of elements and their range. A Binary Search Tree is then created from the generated array. The BST is then converted to a linked list and that linked list is then reversed. As output, the array, the BST that is searched and printed in increasing order, the linked list in increasing order, and the reverse linked list in decreasing order. What prime gap does is calculate the largest gap in consecutive prime numbers using the GMP library.

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
    
    Sample run for primegap:
    
    ./primegap
    
    Usage: ./primegap a b
    
    ./primegap 0 10
    Largest prime gap in [0, 10] is 2
    computed in 0.0e+00 seconds
    
    ./primegap 1 100
    Largest prime gap in [1, 100] is 8
    computed in 0.0e+00 seconds
    
    ./primegap 1 10000
    Largest prime gap in [1, 10000] is 36
    computed in 2.8e+02 seconds
    
