#pragma once
#include <iostream>
#include <string>
#include <unordered_map>
#include <deque>

#include "Patient.h"
#include "Doctor.h"
#include "Appointment.h"

using namespace std;

class Hospital
{
private:
  int appointmentCounter = 0;
  unordered_map<string, Patient *> patients;
  unordered_map<string, Doctor *> doctors;
  deque<Appointment> appointments;
  string generateAppointmentID();

public:
  void registerPatient(Patient *patient);
  void registerDoctor(Doctor *doctor);
  void bookAppointment(string patientID, string doctorID, string date, string time, string priority);
  void cancelAppointment(string appointmentID);
  void showAllAppointments();
  void showDoctorSchedule(string doctorID);
};