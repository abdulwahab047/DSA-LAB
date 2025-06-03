Overview
This C++ program demonstrates and compares three fundamental sorting algorithms:

Bubble Sort

Insertion Sort

Selection Sort

The program allows the user to input an array of integers, apply one of the sorting algorithms, and outputs:

The sorted array

The total number of comparisons made

The total number of exchanges/swaps performed

Additionally, the program includes a simple user interaction timer to measure how long the user takes to enter their name.

Features
User-defined array size and elements

Implementation of three classic sorting algorithms

Performance metrics (comparisons and exchanges)

Time measurement using the time.h library

Console-based input/output interface

How to Use
Compile the program using a C++ compiler that supports <conio.h> (e.g., Turbo C++ or MSVC):

bash
Copy
Edit
g++ -o sort_analysis Source.cpp
Run the executable:

bash
Copy
Edit
./sort_analysis
Follow the prompts to:

Enter the size of the array

Input array values

Enter your name to test the typing timer

View:

The sorted array (currently using Selection Sort by default)

Total comparisons and exchanges

Time taken to type your name

Code Notes
Only Selection Sort is currently active in main(). You can uncomment Bubble(arr, capacity); or insertionsort(arr, capacity); to test other sorting methods.

Global variables comparison and exchange track performance metrics.

Uses dynamic memory allocation for the input array.

Requires a Windows-compatible environment due to usage of <conio.h> and getch().

Sample Output
yaml
Copy
Edit
Enter Size of Array : 5
Enter value 1: 23
Enter value 2: 12
Enter value 3: 45
Enter value 4: 8
Enter value 5: 19
Entered values are : 8 12 19 23 45
Total comparisons: 10
Total exchanges: 3
Please, enter your name: John
Hi John It took you 3 seconds to type your name.
Requirements
C++ compiler (GCC, MSVC, or compatible)

Windows terminal for <conio.h> and getch() support

License
This project is provided for educational purposes. No specific license is applied.
