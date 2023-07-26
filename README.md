# Binary Search Tree in C++

## About
This C++ code implements a simple Binary Search Tree with functions for Insert, Remove, and Inorder Traversal. It also includes additional functions for finding the Minimum and Maximum values in the tree, as well as performing Pre-Order and Post-Order traversals. The code is properly commented to help newbies understand how Binary Trees work using simple recursive functions and pointers.

## Prerequisites
- Basic Knowledge of C/C++
- Understanding Of Class or struct
- Understanding of memory allocation for heap (Malloc, new, @)
- Understanding of pointers

## Code Details
The `BSTN` class represents a Binary Search Tree Node (BSTN) and contains private data members for the key, left node (L), and right node (R). The public access contains the function declarations for all the functionalities. The code ensures that new values inserted into the tree are placed on the right if they are greater than the root and on the left if they are lesser.

Recursive functions are the functions where a singular continuously repeating operation is just recursively called within the function itself. For example, if you had a sum(int n) function which calculates the sum of 1 to n positive numbers, instead of traditional methods, you can have a while loop running until its control variable 'int n' becomes zero, return 'n + sum(n - 1)'. Similar concept is used in every function above.

To begin, you create a BSTN object 'b'. Then give some root value to begin with. Then continuously add leaf values in a for loop or something. Now we got our full tree. Find Maximum, Find Minimum, Remove Value, Search Value, Pre-Order, Post-Order, and In-Order Traversals.

### Functions:
- Constructor: Initializes the `BSTN` class with default values.
- Parameterized Constructor: Initializes the `BSTN` class with a given value.
- Insert: Inserts a new node into the Binary Search Tree recursively.
- Minimum of Tree: Returns the minimum value in the Binary Search Tree.
- Maximum of Tree: Returns the maximum value in the Binary Search Tree.
- Inorder Traversal: Performs an Inorder Traversal of the Binary Search Tree and prints the values in ascending order.
- Remove: Removes a node with a specific value from the Binary Search Tree.
- Search (Hunt): Searches for a specific value in the Binary Search Tree.
- Pre-Order Traversal: Performs a Pre-Order Traversal of the Binary Search Tree.
- Post-Order Traversal: Performs a Post-Order Traversal of the Binary Search Tree.

## Usage
1. Create a `BSTN` object.
2. Use the `Insert` function to add nodes to the Binary Search Tree.
3. Use the `Inorder Traversal` function to print the values in ascending order.
4. Use the `Minimum of Tree` and `Maximum of Tree` functions to find the minimum and maximum values, respectively.
5. Use the `Remove` function to remove a specific value from the tree.
6. Use the `Search (Hunt)` function to search for a specific value in the tree.
7. Use the `Pre-Order Traversal` and `Post-Order Traversal` functions to perform traversals.

## Author
Coded By: Ganeshaanand (Rishi) Balasubramanian
GitHub: [@rbga](https://github.com/rbga)
Master of Applied Sciences, Electrical and Computer Engineering
Dalhousie University, Halifax, Canada (2022)

## License
This project is licensed under the MIT License.

Feel free to clone, modify, and use this code for your own projects. Happy coding! 🚀

## THE OUTPUT FOR ABOVE RUNS AS

The current Binary Tree: 
``` 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 ```

Max of Nodes using Max Recursive function is 20

Min of Nodes using Min Recursive function is 1

Removing Value: 12
```
1 2 3 4 5 6 7 8 9 10 11 13 14 15 16 17 18 19 20
```
Search Operation Using Hunt():

- HUNT 1 = 0x558849c91eb0
- HUNT 2 = 0x558849c92110
- HUNT 3 = 0x558849c920f0
- HUNT 4 = 0x558849c920d0
- HUNT 5 = 0x558849c920b0
- HUNT 6 = 0x558849c92090
- HUNT 7 = 0x558849c92070
- HUNT 8 = 0x558849c92050
- HUNT 9 = 0x558849c92030
- HUNT 10 = 0x558849c92010
- HUNT 11 = 0x558849c91ff0
- HUNT 12 = 0
- HUNT 13 = 0x558849c91fb0
- HUNT 14 = 0x558849c91f90
- HUNT 15 = 0x558849c91f70
- HUNT 16 = 0x558849c91f50
- HUNT 17 = 0x558849c91f30
- HUNT 18 = 0x558849c91f10
- HUNT 19 = 0x558849c91ef0
- HUNT 20 = 0x558849c91ed0

Pre Order Traversal: 
```1 20 19 18 17 16 15 14 13 11 10 9 8 7 6 5 4 3 2```

Post Order Traversal: 
```2 3 4 5 6 7 8 9 10 11 13 14 15 16 17 18 19 20 1```

In Order Traversal: 
```1 2 3 4 5 6 7 8 9 10 11 13 14 15 16 17 18 19 20```
