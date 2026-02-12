# Project-OnTempletes-InCpp

Multi-Type Template Calculator (C++)
A high-performance, generic calculator application that leverages C++ Templates to perform arithmetic operations across various numerical data types with a single codebase.

🌟 Key Features
Generic Programming: Utilizes template <typename T> to support int, float, and double seamlessly.

Dynamic UI Coloring: Uses system-level commands to change console colors based on the application state.

Robust Error Handling: Includes checks for division-by-zero to prevent runtime crashes.

Modular Design: Separates the calculation logic (Class) from the user interaction (Function).

🛠️ Technical Concepts Used
Class Templates: The Calculator<T> class allows for a blueprint that adapts to any numeric type provided at instantiation.

Function Templates: The performCalculation<T>() function simplifies the UI logic by handling user input and object creation generically.

System Integration: Uses <cstdlib> to interact with the Windows command prompt for visual feedback (color changes).

Object-Oriented Logic: Encapsulates data (num1, num2) and provides specific methods for Addition, Subtraction, Multiplication, and Division.

💻 How to Use
Compile:

Bash
g++ projectbytemplet.cpp -o TemplateCalc
Run:

Bash
./TemplateCalc
Process:

Select your preferred data type (Integer, Float, or Double).

Input the two values.

Choose the arithmetic operation.
