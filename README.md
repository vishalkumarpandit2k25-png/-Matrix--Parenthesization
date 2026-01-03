# Matrix Chain Parenthesization in C

This project implements the Matrix Chain Multiplication (Matrix Parenthesization) problem in C.
The goal is to find the number of different ways to fully parenthesize a sequence of matrices
so that the order of multiplication is defined.

This is a classic problem related to Dynamic Programming and recursion.

---

## Problem Statement

Given `n` matrices, the task is to determine how many different ways the matrices can be
parenthesized. The order of multiplication affects the computation, and this problem
focuses on counting valid parenthesizations.

---

## Approach Used

- Recursive method
- Based on the idea of splitting the matrix chain at different positions
- Uses the concept of Catalan numbers

---

## Algorithm Explanation

- If the number of matrices is 1 or 2, only one way of multiplication is possible.
- For more than 2 matrices:
  - Try splitting the chain at every possible position
  - Recursively calculate the number of ways for left and right subchains
  - Add the product of both results

---

## How to Compile and Run

### Linux / macOS
```bash
gcc matrix_parenthesization.c -o matrix -lm
./matrix
