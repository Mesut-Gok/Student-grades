# Student-grades


## Project Purpose
This program calculates students' final grades based on their homework and exam scores.  
Users can choose to calculate the final grade using either the average or the median.

## Features
- Read student data from a file `Students.txt`
- Calculate final grades using **average and median**
- Display formatted output sorted by **surname**
- Show both average-based and median based final grades side by side

## Formula
Final grade = 0.4 × Homework + 0.6 × Exam  
- Average: uses the mean of homework scores  
- Median: uses the median of homework scores

## File Structure
- `main.cpp` → C++ program source code
- `Person.cpp` / `Person.h` → Class implementation and header
- `Students.txt` → Sample student data for input
- `Readme.md` → Project description

## Sample Students.txt
Name Surname      HW1 HW2 HW3 HW4 HW5 Exam 
Jonas Kazlauskas   8   9  10   6  10   9 
Aistė Petrauskaitė 7   10  8   5   4   6 
Domas Jankauskas   10  9   9   8   7   10


## Output Example
Name Surname       Final (Avg.) |  Final (Med.)

Jonas Kazlauskas    8.80        |  9.00 
Aistė Petrauskaitė  6.80        |  6.00 
Domas Jankauskas    8.50        |  8.00


- Final (Avg.): Final grade calculated using average of homework scores  
- Final (Med.): Final grade calculated using median of homework scores

## Build Instructions
To compile and run the program:
```bash
g++ main.cpp Person.cpp -o student_grades
./student_grades


---





