# Digital Systems Simulator


A command-line application developed in **C++17** for exploring number systems, integer representations, digital logic operations, and binary arithmetic.

## Demo

[Watch the Demo](https://youtu.be/VG7CvHNJkZ4)

## Features

### Number Systems & Binary Tools

- Decimal, binary, octal, and hexadecimal representations.
- Signed and unsigned integer information.
- 8-bit binary representation.
- Integer size information.

### Digital Logic Gates

- AND, OR, NOT, XOR, NAND, and NOR operations.
- Interactive gate selection.
- Truth tables and Boolean expressions.
- User-defined binary inputs.
- Input validation.

### Binary Arithmetic

- 4-bit binary addition.
- 4-bit binary subtraction.
- Input validation for binary operands.
- Validation for negative subtraction results.

## Tech Stack

- **Language:** C++17
- **Compiler:** GCC
- **IDE / Code Editor:** Visual Studio Code
- **Version Control:** Git
- **Repository Hosting:** GitHub

## Project Structure

```text
Digital Systems Simulator/
├── include/
│   ├── binary/
│   │   ├── binary_arithmetic.hpp
│   │   └── number_inspector.hpp
│   └── logic/
│       └── logic_gates.hpp
├── src/
│   ├── binary/
│   │   ├── binary_arithmetic.cpp
│   │   └── number_inspector.cpp
│   ├── logic/
│   │   └── logic_gates.cpp
│   └── main.cpp
└── README.md
```

## Build & Run

### Prerequisites

- C++17-compatible compiler.
- Git (optional, for cloning the repository).

### Clone the Repository

```bash
git clone https://github.com/omarnafees/cpp-projects.git
cd cpp-projects
```

### Compile

Run the appropriate command from the repository root.

**Windows (PowerShell):**

```powershell
g++ -std=c++17 -Wall -Wextra -I "Digital Systems Simulator/include" "Digital Systems Simulator/src/main.cpp" "Digital Systems Simulator/src/binary/number_inspector.cpp" "Digital Systems Simulator/src/binary/binary_arithmetic.cpp" "Digital Systems Simulator/src/logic/logic_gates.cpp" -o digital-systems-simulator.exe
```

**Linux:**

```bash
g++ -std=c++17 -Wall -Wextra -I "Digital Systems Simulator/include" "Digital Systems Simulator/src/main.cpp" "Digital Systems Simulator/src/binary/number_inspector.cpp" "Digital Systems Simulator/src/binary/binary_arithmetic.cpp" "Digital Systems Simulator/src/logic/logic_gates.cpp" -o digital-systems-simulator
```

**macOS:**

```bash
clang++ -std=c++17 -Wall -Wextra -I "Digital Systems Simulator/include" "Digital Systems Simulator/src/main.cpp" "Digital Systems Simulator/src/binary/number_inspector.cpp" "Digital Systems Simulator/src/binary/binary_arithmetic.cpp" "Digital Systems Simulator/src/logic/logic_gates.cpp" -o digital-systems-simulator
```

### Run

**Windows:**

```powershell
.\digital-systems-simulator.exe
```

**Linux / macOS:**

```bash
./digital-systems-simulator
```

## Usage

After launching the application:

1. Select **Number Systems & Binary Tools** to explore different number representations.
2. Enter an integer to view its decimal, binary, octal, and hexadecimal representations.
3. Select **Digital Logic Gates** to explore six fundamental logic gates.
4. Choose a gate and provide binary inputs to view its output, Boolean expression, and truth table.
5. Select **Binary Arithmetic** to perform 4-bit binary addition and subtraction.

## Technical Concepts

### C++ Programming

- Organizing multi-file projects using header and source files.
- Declaring and defining functions across multiple files.
- Using function parameters and return values.
- Separating program functionality into modules.
- Using loops and conditional statements for program flow.
- Handling and validating user input.
- Compiling and linking multiple source files.

### Digital Logic Design

- Applying Boolean algebra.
- Implementing fundamental and universal logic gates.
- Constructing and interpreting truth tables.
- Understanding signed and unsigned integer representations.
- Implementing binary addition and subtraction using carry and borrow operations.

### Development Workflow

- Using Git for version control.
- Staging, committing, and pushing changes to GitHub.
- Maintaining a structured project repository.
