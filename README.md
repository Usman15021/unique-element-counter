# Unique Element Counter

This C++ program counts the number of unique elements in an integer array. It uses an `unordered_set` to efficiently handle duplicates and determine the count of unique elements.

## Features

- Accepts an integer array as input.
- Uses an `unordered_set` to store unique elements.
- Returns the count of unique elements in the array.

## How It Works

1. The program defines a function `countUnique` that:
   - Takes an integer array and its size as input.
   - Iterates through the array and inserts each element into an `unordered_set`.
   - Returns the size of the set, which represents the number of unique elements.

2. The `main` function:
   - Defines an example array.
   - Calls the `countUnique` function.
   - Prints the number of unique elements.

## Example Output

### Input Array:
```cpp

The number of unique elements is 8

Requirements
A C++ compiler (e.g., GCC, Clang, or MSVC).
How to Compile and Run
Clone the repository or download the code.
Open a terminal or command prompt.
Navigate to the directory containing the code.
Compile the program:
g++ -o uniqueElement uniqueElement.cpp

License
This project is open-source and available under the MIT License.
{1, 2, 2, 3, 3, 4, 4, 5, 5, 4, 3, 8, 4, 9, 4, 3, 2, 2, 8, 9, 0, 6, 5, 3, 2}
