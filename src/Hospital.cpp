#include "Hospital.h"
#include <sstream>
void Hospital::registerPatient(Patient *patient)
{
  patients[patient->getID()] = patient;
}

void Hospital::registerDoctor(Doctor *doctor)
{
  doctors[doctor->getID()] = doctor;
}

void Hospital::bookAppointment(string patientID, string doctorID, string date, string time, string priority)
{
  Patient *foundPatient = patients[patientID];
  Doctor *foundDoctor = doctors[doctorID];
  string newID = generateAppointmentID();
  Appointment newAppointment(newID, foundPatient, foundDoctor, date, time, "scheduled", priority);
  if (priority == "urgent")
  {
    appointments.push_front(newAppointment);
  }
  else
  {
    appointments.push_back(newAppointment);
  }
}

string Hospital::generateAppointmentID()
{
  appointmentCounter++;
  return "APT" + to_string(appointmentCounter);
}

void Hospital::cancelAppointment(string appointmentID)
{
  for (auto &appointment : appointments)
  {
    if (appointment.getID() == appointmentID)
    {
      appointment.setStatus("cancelled");
      return;
    }
  }

  cout << "The Appointment does not exist.";
}

void Hospital::showAllAppointments()
{
  ostringstream show;
  for (auto &appointment : appointments)
  {
    show
        << "Appointment ID: " << appointment.getID() << endl
        << "Patient: " << appointment.getPatient()->getName() << endl
        << "Doctor : " << appointment.getDoctor()->getName() << endl
        << "Date: " << appointment.getDate() << endl
        << "Time: " << appointment.getTime() << endl
        << "Status: " << appointment.getStatus() << endl
        << "-------------------------------" << endl;
  }
  cout << show.str();
}

void Hospital::showDoctorSchedule(string doctorID)
{
  ostringstream show;
  for (auto &appointment : appointments)
  {
    if (appointment.getDoctor()->getID() == doctorID)
    {
      show
          << "Appointment ID: " << appointment.getID() << endl
          << "Patient: " << appointment.getPatient()->getName() << endl
          << "Doctor : " << appointment.getDoctor()->getName() << endl
          << "Date: " << appointment.getDate() << endl
          << "Time: " << appointment.getTime() << endl
          << "Status: " << appointment.getStatus() << endl
          << "-------------------------------" << endl;
    }
  }
  cout << show.str();
}