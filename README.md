# MediBook

A Hospital Appointment Management System built in C++ using Object-Oriented Programming principles and Data Structures.

## Description
MediBook automates patient registration, doctor scheduling, and appointment booking for a hospital. The system handles booking, cancellation, and schedule viewing through a CLI interface. Urgent appointments are prioritized using a deque-based priority system.

## Features
- Patient and doctor registration with auto-generated IDs
- Appointment booking with priority levels (normal/urgent)
- Urgent appointments are automatically pushed to the front of the queue
- Appointment cancellation with status tracking
- View all appointments
- View a specific doctor's schedule

## Tech Stack
- Language: C++
- Concepts: OOP, Encapsulation, Composition, Aggregation
- Data Structures: Deque, HashMap

## Planned Features
- Interactive CLI menu for all operations
- Patient and doctor registration
- Appointment booking and cancellation
- View all appointments and doctor schedules


## Project Structure
```
MediBook/
├── src/
│   ├── Patient.h / Patient.cpp
│   ├── Doctor.h / Doctor.cpp
│   ├── Appointment.h / Appointment.cpp
│   ├── Hospital.h / Hospital.cpp
│   └── main.cpp
├── diagrams/
│   └── MediBook.drawio
└── README.md
```
