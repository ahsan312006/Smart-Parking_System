🎯 PROJECT OVERVIEW
The Smart Parking Allocation System is a console-based C++ application designed as a Data Structures & Algorithms (DSA) semester project.
The system simulates a real-world parking environment where users can allocate parking spaces, check availability, and prevent duplicate parking in already occupied spaces.

This project demonstrates the practical use of arrays, dynamic memory allocation, and modular programming.
Smart-Parking-Allocation-System/
│
├── main.cpp                 // Program entry point
│
├── ParkingSystem.h          // Core parking system class
├── ParkingSystem.cpp        // Parking system implementation
│
├── ParkingSlot.h            // Parking slot abstraction
├── ParkingSlot.cpp
│
├── ParkingArea.h            // Group of parking slots
├── ParkingArea.cpp
│
├── Zone.h                   // Parking zone representation
├── Zone.cpp
│
├── Vehicle.h                // Vehicle information
├── Vehicle.cpp
│
├── ParkingRequest.h         // Parking request lifecycle
├── ParkingRequest.cpp
│
├── AllocationEngine.h       // Slot allocation logic
├── AllocationEngine.cpp
│
├── RollbackManager.h        // Rollback & cancellation handling
├── RollbackManager.cpp
│
└── README.md                // Project documentation

🎯 Objectives

Understand real-world resource allocation problems

Implement parking space availability checks

Prevent duplicate allocation of parking slots

Practice multi-file C++ project structure

Strengthen DSA concepts using arrays

⚙️ How to Compile & Run
🔹 Requirements

C++ Compiler (g++)

MSYS2 MinGW64 environment

VS Code (recommended)
🔹 Compile Command
g++ ParkingSystem.cpp main.cpp -o parking.exe

🔹 Run Command
./parking.exe