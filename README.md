# Grade Calculator (C++)

A console program that grades **a whole class** in one run: enter the number of
students, type in each student's marks, and get their average and grade instantly.

## Features

- Grades any number of students in a single run (uses a `for` loop)
- Computes the average of 3 subjects (Math, Science, English)
- Assigns grades with an if / else if / else cascade

## Grading scale

| Average score | Grade |
|---------------|-------|
| 90 and above  | A     |
| 60 – 89.9     | B     |
| 40 – 59.9     | C     |
| Below 40      | F     |

## How to run


g++ -std=c++17 grade-calculator.cpp -o grade-calculator
./grade-calculator
```

## Sample output

```
How many students: 2
--- student 1 ---
Marks for math: 95
Marks for science: 92
Marks for English: 98
Your GPA: 95
Your grade: A
--- student 2 ---
Marks for math: 60
Marks for science: 72
Marks for English: 80
Your GPA: 70.6667
Your grade: B
```

## Version history

- **v1** – graded a single student
- **v2** – grades any number of students using a for loop

## What I learned building this

- Variables and data types (`int`, `double`)
- User input with `cin`
- `if / else if / else` cascades — and why gate order matters
- `for` loops: counters, loop bodies, and why `return` stays outside the loop
- Testing with real numbers and edge cases (exactly 90, decimals, failing marks)
