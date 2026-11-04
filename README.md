# Array Operations and Sorting & Searching Algorithms in C

## Project Overview
This project is a menu-independent implementation of fundamental array operations and popular sorting and searching algorithms using the C programming language.

It demonstrates how to insert and delete elements from an array, display updated data, sort arrays using different techniques, and search for specific elements using Linear Search and Binary Search.

## Features

### 1. Array Operations
- **Array Input:** Takes the array size and elements from the user.
- **Insertion:** Inserts a new element at a specified index.
- **Deletion:** Removes the first occurrence of a specified element.
- **Display:** Displays the updated array after insertion and deletion.

### 2. Sorting Algorithms
The program implements three popular sorting algorithms:

- **Bubble Sort:** Repeatedly compares adjacent elements and swaps them if they are in the wrong order.
- **Insertion Sort:** Builds a sorted array by inserting each element into its correct position.
- **Selection Sort:** Finds the smallest element and places it in its correct position.

### 3. Searching Algorithms
The program implements two searching techniques:

- **Linear Search:** Checks each element sequentially until the target is found or the array ends.
- **Binary Search:** Searches for an element in a sorted array by repeatedly dividing the search range into halves.

### 4. Comparison Counting
Both searching algorithms count the number of comparisons performed during the search operation.

## Technologies Used
- Programming Language: C
- Header File: `stdio.h`
- Compiler: GCC / Any Standard C Compiler
- Development Environment: VS Code / CodeBlocks

## Input Format

The program takes input in the following order:

1. Number of elements (`n`).
2. Array elements.
3. Insertion index (`p`) and new value (`x`).
4. Value to be deleted (`del`).
5. Target value for searching (`target`).

## Sample Input

```text
5
10 30 20 50 40
2 25
30
40
```

## Sample Output

```text
Updated Array: 10 25 20 50 40
Bubble Sort: 10 20 25 40 50
Insertion Sort: 10 20 25 40 50
Selection Sort: 10 20 25 40 50
Linear Search: Found at Index 3 (Comparisons: 4)
Binary Search: Found at Index 3 (Comparisons: 3)
```

## Time Complexity Analysis

| Algorithm | Best Case | Average Case | Worst Case |
|---|---|---|---|
| Bubble Sort | O(n) | O(n²) | O(n²) |
| Insertion Sort | O(n) | O(n²) | O(n²) |
| Selection Sort | O(n²) | O(n²) | O(n²) |
| Linear Search | O(1) | O(n) | O(n) |
| Binary Search | O(1) | O(log n) | O(log n) |

*Note: The Bubble Sort implementation shown here does not use an early-exit optimization.*

## How to Run

1. Copy the source code into a file named `main.c`.
2. Open the terminal in the project directory.
3. Compile the program:

```bash
gcc main.c -o main
```

4. Run the program:

```bash
./main
```

For Windows:

```bash
main.exe
```

## Learning Outcomes

By completing this project, users can understand:

- Basic array manipulation.
- Insertion and deletion techniques.
- Working principles of sorting algorithms.
- Differences between Linear Search and Binary Search.
- Time complexity and comparison counting.
- Practical implementation of fundamental Data Structures and Algorithms (DSA).

## Conclusion

This project provides a practical demonstration of fundamental array operations, sorting techniques, and searching algorithms in C. It helps beginners develop a strong understanding of basic Data Structures and Algorithms through hands-on programming.