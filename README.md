# Binary-Search-Tree-in-C++
Implementation of Recursive Binary Search Tree in C++ using CLASS and not STRUCT - Basics

A simple Binary Search Tree with an Insert, Remove and Inorder Traversal Function

Implementation in C++

Each line of code properly commented to help newbies in understanding how Binary Trees work using simple recursive function and pointers.

Pre-requisites
1. Basic Knowledge of C/C++
2. Understanding Of Class or struct
3. Understanding of memory allocation for healp (Malloc, new, @)
4. Understanding of pointers

Current Functions
1. Constructor
2. Parametered Constructor
3. Insert
4. Minimum of Tree
5. Maximum of Tree
6. Inorder Traversal
7. Remove
8. Seach (Hunt)
9. Pre-Order Traversal
10. Post-Order Traversal

More functions for Binary Search Tree will be updated as it goes. Stay Tuned.

DESCRIPTION OF THE PROCESS

We are create a class data structure called BSTN which has private objects KEY, L(eft) and R(ight). In public access we have the function declarations for all the functions as mentioned above. By logic of Binary Search Trees, New value to be inserted is always checked against the root and if greater, placed in the right leaf of that root, and vice versa.

Recursive functions are the functions where a singular continuously repeating operation is just recursively called within the function itself. For example if you had a sum(int n) function which calculates the sum of 1 to n positive numbers, instead of traditional methods, you can have a while loop running until its control variable 'int n' becomes zero, return 'n + sum(n - 1)'. Similar concept is used in every function above.

To begin, you create a BSTN object 'b'.
Then give some root value to begin with.
Then continuosly add leaf values in a for loop or something.
Now we got our full tree.
Find MAximum
Find Minimum
Remove Value
Search Value
Pre-Order
Post-Order
In-Order Traversals. 


THE OUTPUT FOR ABOVE RUNS

The current Binary Tree
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 

Max of Nodes using Max Recursive function is 20
Min of Nodes using Min Recursive function is 1

Removing Value 12
1 2 3 4 5 6 7 8 9 10 11 13 14 15 16 17 18 19 20 

Search Operation Using Hunt()

 HUNT 1 = 0x558849c91eb0
 HUNT 2 = 0x558849c92110
 HUNT 3 = 0x558849c920f0
 HUNT 4 = 0x558849c920d0
 HUNT 5 = 0x558849c920b0
 HUNT 6 = 0x558849c92090
 HUNT 7 = 0x558849c92070
 HUNT 8 = 0x558849c92050
 HUNT 9 = 0x558849c92030
 HUNT 10 = 0x558849c92010
 HUNT 11 = 0x558849c91ff0
 HUNT 12 = 0
 HUNT 13 = 0x558849c91fb0
 HUNT 14 = 0x558849c91f90
 HUNT 15 = 0x558849c91f70
 HUNT 16 = 0x558849c91f50
 HUNT 17 = 0x558849c91f30
 HUNT 18 = 0x558849c91f10
 HUNT 19 = 0x558849c91ef0
 HUNT 20 = 0x558849c91ed0

Pre Order Traversal
1 20 19 18 17 16 15 14 13 11 10 9 8 7 6 5 4 3 2 

Post Order Traversal
2 3 4 5 6 7 8 9 10 11 13 14 15 16 17 18 19 20 1 

In Order Traversal
1 2 3 4 5 6 7 8 9 10 11 13 14 15 16 17 18 19 20 
