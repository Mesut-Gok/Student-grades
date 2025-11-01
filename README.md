# Student-grades

## Project Purpose
This program calculates students' final grades based on their homework and exam scores.  
Users can choose to calculate the final grade using either the average or the median of homework scores.

## Features
- Read student data from a file `Students.txt`
- Manual data entry from the keyboard
- Calculate final grades using **average** and **median**
- Display formatted output sorted by surname
- Show both average-based and median-based final grades side by side
- Generate random homework and exam scores for testing
- Implements the **Rule of Three** (copy constructor, copy assignment, destructor)

## Formula
Final grade = 0.4 × Homework + 0.6 × Exam

- **Average:** uses the mean of homework scores  
- **Median:** uses the median of homework scores

## File Structure
- `main.cpp` → C++ program source code  
- `Person.cpp` / `Person.h` → Class implementation and header  
- `Students.txt` → Sample student data for input  
- `Readme.md` → Project description  

### Sample `Students.txt`

Name Surname      HW1 HW2 HW3 HW4 HW5 Exam
Jonas Kazlauskas   8  9   10  6   10  9
Aistė Petrauskaitė 7  10  8   5   4   6
Domas Jankauskas   10 9   9   8   7   10


## User Input
- Run the program without `Students.txt` to manually enter student data.  
- Enter homework scores one by one; type `done` when finished.  
- Enter the exam score for the student.  

## Random Data Generation
- The program can generate random homework and exam scores for testing.  
- Use option 2 in the menu to generate random data.

## Output Example
Name Surname        Final (Avg.) |  Final (Med.)
Jonas Kazlauskas    8.80         |   9.00
Aistė Petrauskaitė  6.80         |   6.00
Domas Jankauskas    8.50         |   8.00

- **Final (Avg.):** Final grade calculated using average of homework scores  
- **Final (Med.):** Final grade calculated using median of homework scores  

## Build Instructions
To compile and run the program:


- Compatible with Linux and macOS terminals using g++.  
- On Windows, use a compatible g++ compiler (e.g., MinGW).

## Notes
- Number of students and homework assignments are **dynamic**; the program adapts to the input.  
- Implements the **Rule of Three** to properly manage dynamic memory in the `Person` class.  
- Outputs are neatly formatted and sorted by **surname**.

## Release
- Sub-repository `v0.1` created for version tracking  
- Release `v0.1` available on GitHub







