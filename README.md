# Grade Calculator (C++)

A console program that reads 3 exam marks, computes the average,
and prints the student's grade.

## Grading scale
| Average | Grade |
|---------|-------|
| 90+     | A     |
| 60–89.9 | B     |
| 40–59.9 | C     |
| below 40| F     |

## How to run
g++ -std=c++17 grade_calculator.cpp -o grade_calculator
./grade_calculator

## Sample output
Enter marks for 3 subjects: 85.5 90 77
Your GPA: 84.1667
Your grade: B

## What I learned building this
- Variables and data types (double, string)
- User input with cin / getline
- if / else if / else cascades (why order matters!)
- Testing with edge cases (exactly 90, below 40, decimals)
