#pragma once
#include <iostream>
#include <string>
#include <unordered_map>
#include <queue>

#include "Patient.h"
#include "Doctor.h"
#include "Appointment.h"

using namespace std;

class Hospital
{
private:
  unordered_map<string, Patient *> patients;
  unordered_map<string, Doctor *> doctors;
  priority_queue<Appointment> appointments;
};