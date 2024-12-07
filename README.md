# Buffer Overflow in C

This repository demonstrates a simple example of a buffer overflow error in C.  Buffer overflows occur when a program attempts to write data beyond the allocated memory region of an array or buffer. This can lead to unpredictable behavior, crashes, or security vulnerabilities (e.g., attackers could potentially inject malicious code).

## The Bug

The `bug.c` file contains code that attempts to write data beyond the bounds of an array.  This is a common and dangerous error that can be difficult to detect.

## The Solution

The `bugSolution.c` file provides a corrected version of the code. It demonstrates proper memory management to avoid the buffer overflow.

## How to Compile and Run

1. Clone the repository.
2. Compile both `bug.c` and `bugSolution.c` using a C compiler (e.g., GCC):
   ```bash
   gcc bug.c -o bug
   gcc bugSolution.c -o bugSolution
   ```
3. Run the compiled executables: 
   ```bash
   ./bug
   ./bugSolution
   ```