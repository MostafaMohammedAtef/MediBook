# MediBook

A Hospital Appointment Management System built in C++ using Object-Oriented Programming principles and Data Structures.

## Description
MediBook automates patient registration, doctor scheduling, and appointment booking for a hospital. The system handles booking, cancellation, and schedule viewing through a CLI interface. Urgent appointments are prioritized using a priority queue.

## Features
- Patient and doctor registration with auto-generated IDs
- Appointment booking with priority levels (normal/urgent)
- Appointment cancellation
- View all appointments
- View a specific doctor's schedule sorted by date and time

## Tech Stack
- Language: C++
- Concepts: OOP, Encapsulation, Composition, Aggregation
- Data Structures: Priority Queue, HashMap, Sorting

## CLI Menu

Register a Patient
Register a Doctor
Book an Appointment
Cancel an Appointment
Show All Appointments
Show Doctor Schedule
Exit


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
├── .gitignore
└── README.md
```
