#include "Appointment.h"
#include <sstream>
Appointment::Appointment(string appointmentID, Patient *patient, Doctor *doctor, string date, string time, string status, string priority)
    : appointmentID(appointmentID), patient(patient), doctor(doctor), date(date), time(time), status(status), priority(priority) {}

string Appointment::getID() { return appointmentID; }

Patient *Appointment::getPatient() { return patient; }

Doctor *Appointment::getDoctor() { return doctor; }

string Appointment::getDate() { return date; }

string Appointment::getTime() { return time; }

string Appointment::getStatus()
{
  return status;
}

void Appointment::setStatus(string status){this -> status = status}

string Appointment::getSummary()
{
  ostringstream summary;

  summary
      << "Appointment ID: " << appointmentID << endl
      << "Patient: " << patient->getName() << endl
      << "Doctor: " << doctor->getName() << endl
      << "Date: " << date << endl
      << "Time: " << time << endl
      << "Status: " << status;

  return summary.str();
}