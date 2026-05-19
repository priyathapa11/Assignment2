# Assignment2
# Scopes and Closures Comparison

## Overview

This project compares how Python, JavaScript, and C++ handle scopes and closures.

A closure is a programming language feature where an inner function can access and remember variables from its outer function even after the outer function has finished executing.

The same counter program is implemented in three languages:

- Python
- JavaScript
- C++

Each program creates independent counter functions using closures.

---

## Feature Analyzed

The feature analyzed in this project is:

**Scopes and Closures**

The programs demonstrate how each language allows a function to retain access to variables from its surrounding scope.

---

## Python

Python supports closures through nested functions. In the program, the inner function `increment()` accesses the variable `count` from the outer function `create_counter()`.

Because `count` is modified inside the inner function, Python requires the `nonlocal` keyword.

```python
nonlocal count
