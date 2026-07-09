#pragma once

#include <iostream>
#include <string>

#include "Patient.h"
#include "Doctor.h"

using namespace std;
class Appointment
{
private:
  string appointmentID;
  Patient *patient;
  Doctor *doctor;
  string date;
  string time;
  string status;
  string priority;

public:
  Appointment(string appointmentID = "unknown", Patient *patient = nullptr, Doctor *doctor = nullptr, string date = "unknown", string time = "unknown", string status = "unknown", string priority = "unknown");

  string getID();
  Patient *getPatient();
  Doctor *getDoctor();
  string getDate();
  string getTime();
  string getStatus();
  void setStatus(string newStatus);
  string getSummary();
};