# Grade Calculator (C++)

A console program that grades **a whole class** in one run. Built with
custom functions: one computes the average, another assigns the grade.

## Features

- Grades any number of students in a single run (`for` loop)
- Computes the average of 3 subjects with a dedicated function
- Assigns grades via an if/else cascade inside a `void` function
- Clean separation: `main` handles input/output, functions handle logic

## Grading scale

| Average score | Grade |
|---------------|-------|
| 90 and above  | A     |
| 60 – 89.9     | B     |
| 40 – 59.9     | C     |
| Below 40      | F     |

## How to run

```bash
g++ -std=c++17 grade-calculator.cpp -o grade-calculator
./grade-calculator
```

## Sample output

```
How many students: 2
95 92 98
Your GPA: 95
Your grade: A
30 25 40
Your GPA: 31.6667
You failed
```

## Version history

- **v1** – graded a single student
- **v2** – grades any number of students using a `for` loop
- **v3** – refactored with functions (`average()` + `printgrade()`)

## What I learned building this

- Variables and data types (`int`, `double`)
- User input with `cin`, output with `cout`
- `if / else if / else` cascades — and why gate order matters
- `for` loops: counters, loop bodies, keeping `return` outside the loop
- Functions: parameters, return values, `void`, and scope
- Testing with real numbers and edge cases (exactly 90, decimals, failing marks)
