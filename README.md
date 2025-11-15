# Student-grades

## Overview
This project is developed as part of programming assignments (Task Nr. 1 and Task Nr. 2).  
It implements a student grading system with features such as:
- Reading student data from input or files
- Calculating final grades using **average** or **median**
- Sorting and formatting output
- Dividing students into **passed** and **failed**
- Performance analysis with different STL containers (`std::vector`, `std::list`, `std::deque`)

## Task Nr. 1 (Release v0.1)
### Requirements
- Create initial repository `main` and sub-repository `v0.1`.
- Implement class **Person** with:
  - Attributes: `name`, `surname`, `homework results`, `exam result`, `final grade`
  - Methods: constructors, copy constructor, assignment operator, destructor (rule of three)
  - Overloaded input (`cin`) and output (`cout`) operators
  - Calculation of final grade (average or median)
- Allow user to enter homework results dynamically (unknown count).
- Use `std::vector` for homework storage.
- Add random generation of homework and exam scores.
- Read data from file `Students.txt` and output formatted results:

Name Surname           Final (Avg.) | Final (Med.)

Name1 Surname1         x.xx         | y.yy 
Name2 Surname2         y.yy         | z.zz

- Sort students by name or surname.
- Commit results and create **Release v0.1**.


## Task Nr. 2 (Release v0.2 / v0.25)
### Refactoring
- Reorganize code into multiple files:
- `Person.h/.cpp`, `IO.h/.cpp`, `Generation.h/.cpp`, `Processing.h/.cpp`, `Timing.h/.cpp`, `Exceptions.h`
- Introduce **exception handling** (e.g., file not found, invalid input).
- Improve modularity and readability.

### Dataset Generation
- Generate random student lists with sizes:
- 1,000
- 10,000
- 100,000
- 1,000,000
- 10,000,000
- Names generated as `NameX SurnameX`.

### Processing
- Sort students by name/surname.
- Divide into two categories:
- **Passed**: final points ≥ 5.0
- **Failed**: final points < 5.0
- Save results into two separate files.

### Performance Analysis
- Measure execution time for each phase:
- Reading data
- Sorting
- Dividing into passed/failed
- Writing results
- Compare performance across containers:
- `std::vector` → Release v0.2
- `std::list` and `std::deque` → Release v0.25






