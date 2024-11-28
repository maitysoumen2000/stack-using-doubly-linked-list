# Stack Implementation Using Doubly Linked List in C

## Overview
This program implements a **stack using a doubly linked list** in C. It supports basic stack operations such as `push`, `pop`, `peek`, and `display`. The implementation ensures that stack operations are performed efficiently using dynamic memory allocation.

---

## Features

1. **Stack Operations**:
   - **Push**: Adds an element to the top of the stack.
   - **Pop**: Removes the top element from the stack.
   - **Peek**: Retrieves the top element without removing it.
   - **Display**: Prints all elements in the stack.

2. **Dynamic Memory Allocation**:
   - The stack uses a doubly linked list, allowing for dynamic resizing and efficient memory usage.

3. **Fixed Maximum Size**:
   - The maximum size of the stack is defined by `MAX = 100`.

---

## Files

### `stack_using_dll.c`
This file contains:
- `push(struct node *start, int num)`: Adds elements to the stack.
- `pop(struct node *start)`: Removes the top element from the stack.
- `peek(struct node *start)`: Retrieves the top element without removing it.
- `display(struct node *start)`: Displays the stack contents.

---

## Functions

### 1. `struct node *push(struct node *start, int num)`
- **Purpose**: Adds an element to the top of the stack.
- **Parameters**:
  - `start`: The pointer to the top of the stack.
  - `num`: The value to be pushed onto the stack.
- **Logic**:
  - If the stack has not reached its maximum size (`MAX`), dynamically allocate a new node and link it as the new top of the stack.
  - Increment the `top` variable to track the stack size.

---

### 2. `struct node *pop(struct node *start)`
- **Purpose**: Removes the top element from the stack.
- **Parameters**:
  - `start`: The pointer to the top of the stack.
- **Logic**:
  - Remove the node at the top of the stack and update the `start` pointer.
  - Decrement the `top` variable to track the stack size.
  - Free the memory occupied by the removed node.

---

### 3. `struct node *peek(struct node *start)`
- **Purpose**: Displays the top element of the stack without removing it.
- **Parameters**:
  - `start`: The pointer to the top of the stack.
- **Logic**:
  - Print the `data` field of the node at the top of the stack.

---

### 4. `struct node *display(struct node *start)`
- **Purpose**: Prints all elements in the stack from top to bottom.
- **Parameters**:
  - `start`: The pointer to the top of the stack.
- **Logic**:
  - Traverse the stack from the top to the bottom, printing the `data` field of each node.

---

## Usage

1. **Compilation**: Compile the program using a C compiler:
   ```bash
   gcc -o stack_using_dll stack_using_dll.c
